;; Function To Be Tested: OPEN
;;
;; Source:        Steele's book    
;;                Section 23.2	        
;;                Page: 418
;;
;; Created By:    Henry Cate III
;;
;; Creation Date: November 13,1986
;;
;; Last Update:    
;;
;; Filed As:      {ERIS}<LISPCORE>CML>TEST>23-2-OPEN.TEST
;;
;;
;; Syntax:        (OPEN filename &key :direction :element-type
;;					:if-exists :if-does-not-exist)
;;
;;
;;
;; Function Description:
;;     renames a file
;; 
;; 
;; 
;; Argument(s):   filename - pointer to a file
;;			   direction - the direction of data
;;			   element-type - the type of data stored in the file
;;			   if-exists - what to do if it exists
;;			   if-does-not-exist - what to do if it doesn't exist
;;
;; Returns:       if it succeed a stream to the file
;;


(do-test "need to load the functions file"
(unless (fboundp '23check-parse-list)   (load "{eris}<lispcore>cml>test>23-functions.def"))
  T)	


(do-test "if able to build a file, then part of open works."
  (let* ((temp-name (string (gensym)))
	    (simple-list (23BUILD-LIST-OF-FILENAME-PATHNAMES 
		  "core" 1 "tempdevice" nil temp-name))
	    (probe-result (probe-file (car simple-list)))
	    (expect (concatenate 'string "{CORE}TEMPDEVICE:" temp-name ".;1"))
	    (result (and (pathnamep probe-result)
			(string-equal (namestring probe-result) expect))))
	(23Delete-file-list simple-list) 
	result))

(do-test "check can open and reopen."
  (let* ((temp-name (string (gensym)))
	    (temp-pathname (car (23BUILD-LIST-OF-FILENAME-PATHNAMES 
			"core" 1 "tempdevice" nil temp-name)))
	    (temp-stream (cl:open temp-pathname 
			:direction :output :if-exists :new-version))
	    (probe-result (probe-file temp-stream))
	    (expect (concatenate 'string "{CORE}TEMPDEVICE:" temp-name ".;2"))
	    (result (and (pathnamep probe-result)
			(string-equal (namestring probe-result) expect))))
	(cl:close temp-stream)
	(Delete-file temp-pathname) 
	result))


(do-test "Try for files which do not exist"
	T)

(do-test "test error conditions"
   (flet ((handle-expect-errors (value) 
		  (xcl-test:expect-errors (cl:error) 
			(cl:open value))
		))
   (and
	(handle-expect-errors #\h)
	(handle-expect-errors (list 'hi 'bye))
	(handle-expect-errors (make-array '(2 3 4)))
	(handle-expect-errors (make-hash-table))
	(handle-expect-errors (copy-readtable))
	(handle-expect-errors (find-package 'Lisp))
;	(handle-expect-errors (make-random-state))
	T
   )))



STOP
