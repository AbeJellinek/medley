;; Function To Be Tested: PATHNAME-DIRECTORY & DIRECTORY-NAMESTRING
;;
;; Source:        Steele's book    
;;                Section 23.1.2	PATHNAME Functions        
;;                Page: 417
;;
;; Created By:    Henry Cate III
;;
;; Creation Date: November 5,1986
;;
;; Last Update:    
;;
;; Filed As:      {ERIS}<LISPCORE>CML>TEST>23-1-2-PATHNAME-DIRECTORY.TEST
;;
;;
;; Syntax:        (PATHNAME-DIRECTORY pathname)
;;                (DIRECTORY-NAMESTRING pathname)
;;
;;
;;
;; Function Description:
;;     returns the name of the directory as a string or symbol
;;     returns the name of the directory as a string
;; 
;; 
;; 
;; Argument(s):   pathname - pointing to a file 
;;
;; Returns:       the directory name
;;


(do-test "load functions for chapter 23 tests"
(unless (fboundp '23check-parse-list)   (load "{eris}<lispcore>cml>test>23-functions.def"))
  T)			; get here and functions were defined


(do-test "test, PATHNAME-DIRECTORY, a simple case"
	:before (progn (setq simple-list 
		  (23BUILD-LIST-OF-FILENAME-PATHNAMES "core" 3 nil "tempdir")))
	:after (progn (23Delete-file-list simple-list))
	(23TEST-PATHNAME-VALUE-list simple-list 'directory "TEMPDIR"))

(do-test "test, DIRECTORY-NAMESTRING, a simple case"
	:before (progn (setq simple-list 
		  (23BUILD-LIST-OF-FILENAME-PATHNAMES "core" 3 nil "tempdir")))
	:after (progn (23Delete-file-list simple-list))
	(23TEST-NAMESTRING-VALUE-list simple-list 'directory "TEMPDIR"))


(do-test-group "test do same type of test on several different HOSTS"
	:before (PROGN

; this function is just for this test case.
(test-defun 23BUILD-DIRECTORY-LIST (host directory result-type)
	"build a list to test pathname-directory"
    (append 
	; general cases, for many file serves
	(23file-generator result-type host 2 nil directory)
	(23file-generator result-type host 2 nil directory nil "temptype")
	(23file-generator result-type host 2 nil directory nil "temptype12")
    ))

;Do each type
(test-defun 23BUILD-DIRECTORY-LIST-ALL (host directory)
	"build the master list for the checker"
  (append
	(23BUILD-DIRECTORY-LIST host directory 'PATHNAME)
	(23BUILD-DIRECTORY-LIST host directory 'STREAM)
	(23BUILD-DIRECTORY-LIST host directory 'STRING)
	(23BUILD-DIRECTORY-LIST host directory 'SYMBOL)
  ))

(test-defun 23DRIVE-DIRECTORY-LIST-PATHNAME
	 (host directory-create directory-match)
	"push the same test across many hosts"
  (let* ((big-list (23BUILD-DIRECTORY-LIST-ALL host directory-create))
	    (result (23TEST-PATHNAME-VALUE-list 
		big-list 'directory directory-match)))
	(23Delete-file-list big-list)
	result))

(test-defun 23DRIVE-DIRECTORY-LIST-NAMESTRING
	 (host directory-create directory-match)
	"push the same test across many hosts"
  (let* ((big-list (23BUILD-DIRECTORY-LIST-ALL host directory-create))
	   (result (23TEST-NAMESTRING-VALUE-list 
		big-list 'directory directory-match)))
	(23Delete-file-list big-list)
	result))



)	; End of defining functions for this test group.


(do-test "testing PATHNAME-DIRECTORY, lots of variations in {CORE}"
	(23DRIVE-DIRECTORY-LIST-PATHNAME "core" 
		"cmltest>sub>sub12" "CMLTEST>SUB>SUB12"))

(do-test "testing PATHNAME-DIRECTORY, lots of variations in {DSK}"
	(23DRIVE-DIRECTORY-LIST-PATHNAME "DSK" 
		"lispfiles>cmltest>sub" "LISPFILES>CMLTEST>SUB"))


(do-test "testing PATHNAME-DIRECTORY, lots of variations in {ERINYES}"
	(23DRIVE-DIRECTORY-LIST-PATHNAME "erinyes" "cmltest>sub" "CMLTEST>SUB"))

(do-test "testing PATHNAME-DIRECTORY, lots of variations in {pollux}"
	(23DRIVE-DIRECTORY-LIST-PATHNAME 
		"pollux:aisnorth:xerox" "cmltest" "CMLTEST"))



(do-test "testing DIRECTORY-NAMESTRING, lots of variations in {CORE}"
	(23DRIVE-DIRECTORY-LIST-NAMESTRING "CORE" 
		"cmltest>sub>sub12" "CMLTEST>SUB>SUB12"))

(do-test "testing DIRECTORY-NAMESTRING, lots of variations in {DSK}"
	(23DRIVE-DIRECTORY-LIST-NAMESTRING "DSK" 
		"lispfiles>cmltest>sub" "LISPFILES>CMLTEST>SUB"))

(do-test "testing PATHNAME-DIRECTORY, lots of variations in {ERINYES}"
	(23DRIVE-DIRECTORY-LIST-NAMESTRING "erinyes" "cmltest>sub" "CMLTEST>SUB"))

(do-test "testing PATHNAME-DIRECTORY, lots of variations in {pollux}"
	(23DRIVE-DIRECTORY-LIST-NAMESTRING
		"pollux:aisnorth:xerox" "cmltest" "CMLTEST"))




)	; end of do-test-group
	

(do-test "testing PATHNAME-DIRECTORY for error conditions"
   (flet ((handle-expect-errors (value) 
		  (xcl-test:expect-errors (cl:error) 
			(PATHNAME-DIRECTORY value))
		))
   (and
	(handle-expect-errors 54)
	(handle-expect-errors #\h)
	(handle-expect-errors (list 'hi 'bye))
	(handle-expect-errors (make-array '(2 3 4)))
	(handle-expect-errors (make-hash-table))
	(handle-expect-errors (copy-readtable))
	(handle-expect-errors (find-package 'Lisp))
;	(handle-expect-errors (make-random-state))
	(not (PATHNAME-DIRECTORY "DF"))
	(not (PATHNAME-DIRECTORY "OCT-6-65"))
	(not (PATHNAME-DIRECTORY 'hello))
	(not (PATHNAME-DIRECTORY 'bye))
	(not (PATHNAME-DIRECTORY (make-broadcast-stream *terminal-io*)))
   )))




(do-test "testing DIRECTORY-NAMESTRING for error conditions"
   (flet ((handle-expect-errors (value) 
		  (xcl-test:expect-errors (cl:error) 
			(DIRECTORY-NAMESTRING value))
		))
   (and
	(handle-expect-errors 54)
	(handle-expect-errors #\h)
	(handle-expect-errors (list 'hi 'bye))
	(handle-expect-errors (make-array '(2 3 4)))
	(handle-expect-errors (make-hash-table))
	(handle-expect-errors (copy-readtable))
	(handle-expect-errors (find-package 'Lisp))
;	(handle-expect-errors (make-random-state))
	(not (DIRECTORY-NAMESTRING "DF"))
	(not (DIRECTORY-NAMESTRING "OCT-6-65"))
	(not (DIRECTORY-NAMESTRING 'hello))
	(not (DIRECTORY-NAMESTRING 'bye))
	(not (DIRECTORY-NAMESTRING (make-broadcast-stream *terminal-io*)))
   )))



STOP
