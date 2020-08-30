/*
   This file was automatically converted using the program convertMappingToC.py.
   Original File: /home1/__/user/pas/unicode/mappings/vendors/apple/cyrillic.txt
   Converted On: Sun May 18 15:01:34 1997.

   The set of files for which this converter was created are the files
   in /unix/mappings/ on the CD-ROM which comes with the Unicode 2.0
   standard. Any comments in the original files are preserved in the
   output.

   You should probably not edit this file.

   To use this file, you must define the following macros and then
   include this file. For example, to create a simple list of these
   values indexed by windows code page value:

       #define WCP_UNICODE_STR_TYPE unsigned int 
       #define WCP_UNICODE_STR_VALUES(_v,_u,_s) _u
       #include "thisfile.c"

   See the NOTES section at the end of this file for VERY IMPORTANT
   information that arose during the creating of this file. 
*/

/* Any header comments from original file follow: */
/*    Name:             MacOS_Cyrillic [to Unicode] */
/*    Unicode versions: 1.1, 2.0 */
/*    Table version:    0.2 (from internal ufrm version <5>) */
/*    Date:             15 April 1995 */
/*    Authors:          Peter Edberg <edberg1@applelink.apple.com> */
/*                      Judy Kettenhofen */
/*    Copyright (c) 1995 Apple Computer, Inc.  All Rights reserved. */
/*    Apple, the Apple logo, and Macintosh are trademarks of Apple */
/*    Computer, Inc., registered in the United States and other countries. */
/*    Unicode is a trademark of Unicode Inc. For the sake of brevity, */
/*    throughout this document, "Macintosh" can be used to refer to */
/*    Macintosh computers and "Unicode" can be used to refer to the */
/*    Unicode standard. */
/*    Apple makes no warranty or representation, either express or */
/*    implied, with respect to these tables, their quality, accuracy, or */
/*    fitness for a particular purpose. In no event will Apple be liable */
/*    for direct, indirect, special, incidental, or consequential damages */
/*    resulting from any defect or inaccuracy in this document or the */
/*    accompanying tables. */
/*    These mapping tables and character lists are preliminary and */
/*    subject to change. Updated tables will be available from the */
/*    Unicode Inc. ftp site (unicode.org), the Apple Computer ftp site */
/*    (ftp.info.apple.com), the Apple Computer World-Wide Web pages */
/*    (http://www.info.apple.com), and possibly on diskette from APDA */
/*    (Apple's mail-order distribution service for developers). */
/*    Format: */
/*    ------- */
/*    Three tab-separated columns; */
/*    '#' begins a comment which continues to the end of the line. */
/*      Column #1 is the MacOS Cyrillic code (in hex as 0xNN) */
/*      Column #2 is the Unicode (in hex as 0xNNNN) */
/*      Column #3 is the Unicode name (follows a comment sign, '#') */
/*    The entries are in MacOS Cyrillic code order. */
/*    Notes on MacOS Cyrillic: */
/*    ------------------------ */
/*    The MacOS Cyrillic encoding includes the full Cyrillic letter */
/*    repertoire of ISO 8859-5 (although not at the same code points). */
/*    This covers most of the Slavic languages written in Cyrillic */
/*    script. */
/*    The MacOS Cyrillic encoding also includes a number of characters */
/*    needed for the MacOS user interface (e.g. ellipsis), MacOS */
/*    localization (bullet for echoing passwords, copyright sign, etc. */
/*    All of the characters in MacOS Cyrillic that are also in the MacOS */
/*    Roman encoding are at the same code point as MacOS Roman. This */
/*    improves application compatibility (since some naughty applications */
/*    hard-code the MacOS Roman code points of certain characters). */
/*    A variant of MacOS Cyrillic is used for Ukrainian. A separate */
/*    mapping table is available for Ukrainian. */
/* ################# */
WCP_UNICODE_STR_TYPE cyrillic[] = {
WCP_UNICODE_STR_VALUES(0x00, 0x0000, "NULL"),
WCP_UNICODE_STR_VALUES(0x01, 0x0001, "START OF HEADING"),
WCP_UNICODE_STR_VALUES(0x02, 0x0002, "START OF TEXT"),
WCP_UNICODE_STR_VALUES(0x03, 0x0003, "END OF TEXT"),
WCP_UNICODE_STR_VALUES(0x04, 0x0004, "END OF TRANSMISSION"),
WCP_UNICODE_STR_VALUES(0x05, 0x0005, "ENQUIRY"),
WCP_UNICODE_STR_VALUES(0x06, 0x0006, "ACKNOWLEDGE"),
WCP_UNICODE_STR_VALUES(0x07, 0x0007, "BELL"),
WCP_UNICODE_STR_VALUES(0x08, 0x0008, "BACKSPACE"),
WCP_UNICODE_STR_VALUES(0x09, 0x0009, "HORIZONTAL TABULATION"),
WCP_UNICODE_STR_VALUES(0x0A, 0x000A, "LINE FEED"),
WCP_UNICODE_STR_VALUES(0x0B, 0x000B, "VERTICAL TABULATION"),
WCP_UNICODE_STR_VALUES(0x0C, 0x000C, "FORM FEED"),
WCP_UNICODE_STR_VALUES(0x0D, 0x000D, "CARRIAGE RETURN"),
WCP_UNICODE_STR_VALUES(0x0E, 0x000E, "SHIFT OUT"),
WCP_UNICODE_STR_VALUES(0x0F, 0x000F, "SHIFT IN"),
WCP_UNICODE_STR_VALUES(0x10, 0x0010, "DATA LINK ESCAPE"),
WCP_UNICODE_STR_VALUES(0x11, 0x0011, "DEVICE CONTROL ONE"),
WCP_UNICODE_STR_VALUES(0x12, 0x0012, "DEVICE CONTROL TWO"),
WCP_UNICODE_STR_VALUES(0x13, 0x0013, "DEVICE CONTROL THREE"),
WCP_UNICODE_STR_VALUES(0x14, 0x0014, "DEVICE CONTROL FOUR"),
WCP_UNICODE_STR_VALUES(0x15, 0x0015, "NEGATIVE ACKNOWLEDGE"),
WCP_UNICODE_STR_VALUES(0x16, 0x0016, "SYNCHRONOUS IDLE"),
WCP_UNICODE_STR_VALUES(0x17, 0x0017, "END OF TRANSMISSION BLOCK"),
WCP_UNICODE_STR_VALUES(0x18, 0x0018, "CANCEL"),
WCP_UNICODE_STR_VALUES(0x19, 0x0019, "END OF MEDIUM"),
WCP_UNICODE_STR_VALUES(0x1A, 0x001A, "SUBSTITUTE"),
WCP_UNICODE_STR_VALUES(0x1B, 0x001B, "ESCAPE"),
WCP_UNICODE_STR_VALUES(0x1C, 0x001C, "FILE SEPARATOR"),
WCP_UNICODE_STR_VALUES(0x1D, 0x001D, "GROUP SEPARATOR"),
WCP_UNICODE_STR_VALUES(0x1E, 0x001E, "RECORD SEPARATOR"),
WCP_UNICODE_STR_VALUES(0x1F, 0x001F, "UNIT SEPARATOR"),
WCP_UNICODE_STR_VALUES(0x20, 0x0020, "SPACE"),
WCP_UNICODE_STR_VALUES(0x21, 0x0021, "EXCLAMATION MARK"),
WCP_UNICODE_STR_VALUES(0x22, 0x0022, "QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0x23, 0x0023, "NUMBER SIGN"),
WCP_UNICODE_STR_VALUES(0x24, 0x0024, "DOLLAR SIGN"),
WCP_UNICODE_STR_VALUES(0x25, 0x0025, "PERCENT SIGN"),
WCP_UNICODE_STR_VALUES(0x26, 0x0026, "AMPERSAND"),
WCP_UNICODE_STR_VALUES(0x27, 0x0027, "APOSTROPHE"),
WCP_UNICODE_STR_VALUES(0x28, 0x0028, "LEFT PARENTHESIS"),
WCP_UNICODE_STR_VALUES(0x29, 0x0029, "RIGHT PARENTHESIS"),
WCP_UNICODE_STR_VALUES(0x2A, 0x002A, "ASTERISK"),
WCP_UNICODE_STR_VALUES(0x2B, 0x002B, "PLUS SIGN"),
WCP_UNICODE_STR_VALUES(0x2C, 0x002C, "COMMA"),
WCP_UNICODE_STR_VALUES(0x2D, 0x002D, "HYPHEN-MINUS"),
WCP_UNICODE_STR_VALUES(0x2E, 0x002E, "FULL STOP"),
WCP_UNICODE_STR_VALUES(0x2F, 0x002F, "SOLIDUS"),
WCP_UNICODE_STR_VALUES(0x30, 0x0030, "DIGIT ZERO"),
WCP_UNICODE_STR_VALUES(0x31, 0x0031, "DIGIT ONE"),
WCP_UNICODE_STR_VALUES(0x32, 0x0032, "DIGIT TWO"),
WCP_UNICODE_STR_VALUES(0x33, 0x0033, "DIGIT THREE"),
WCP_UNICODE_STR_VALUES(0x34, 0x0034, "DIGIT FOUR"),
WCP_UNICODE_STR_VALUES(0x35, 0x0035, "DIGIT FIVE"),
WCP_UNICODE_STR_VALUES(0x36, 0x0036, "DIGIT SIX"),
WCP_UNICODE_STR_VALUES(0x37, 0x0037, "DIGIT SEVEN"),
WCP_UNICODE_STR_VALUES(0x38, 0x0038, "DIGIT EIGHT"),
WCP_UNICODE_STR_VALUES(0x39, 0x0039, "DIGIT NINE"),
WCP_UNICODE_STR_VALUES(0x3A, 0x003A, "COLON"),
WCP_UNICODE_STR_VALUES(0x3B, 0x003B, "SEMICOLON"),
WCP_UNICODE_STR_VALUES(0x3C, 0x003C, "LESS-THAN SIGN"),
WCP_UNICODE_STR_VALUES(0x3D, 0x003D, "EQUALS SIGN"),
WCP_UNICODE_STR_VALUES(0x3E, 0x003E, "GREATER-THAN SIGN"),
WCP_UNICODE_STR_VALUES(0x3F, 0x003F, "QUESTION MARK"),
WCP_UNICODE_STR_VALUES(0x40, 0x0040, "COMMERCIAL AT"),
WCP_UNICODE_STR_VALUES(0x41, 0x0041, "LATIN CAPITAL LETTER A"),
WCP_UNICODE_STR_VALUES(0x42, 0x0042, "LATIN CAPITAL LETTER B"),
WCP_UNICODE_STR_VALUES(0x43, 0x0043, "LATIN CAPITAL LETTER C"),
WCP_UNICODE_STR_VALUES(0x44, 0x0044, "LATIN CAPITAL LETTER D"),
WCP_UNICODE_STR_VALUES(0x45, 0x0045, "LATIN CAPITAL LETTER E"),
WCP_UNICODE_STR_VALUES(0x46, 0x0046, "LATIN CAPITAL LETTER F"),
WCP_UNICODE_STR_VALUES(0x47, 0x0047, "LATIN CAPITAL LETTER G"),
WCP_UNICODE_STR_VALUES(0x48, 0x0048, "LATIN CAPITAL LETTER H"),
WCP_UNICODE_STR_VALUES(0x49, 0x0049, "LATIN CAPITAL LETTER I"),
WCP_UNICODE_STR_VALUES(0x4A, 0x004A, "LATIN CAPITAL LETTER J"),
WCP_UNICODE_STR_VALUES(0x4B, 0x004B, "LATIN CAPITAL LETTER K"),
WCP_UNICODE_STR_VALUES(0x4C, 0x004C, "LATIN CAPITAL LETTER L"),
WCP_UNICODE_STR_VALUES(0x4D, 0x004D, "LATIN CAPITAL LETTER M"),
WCP_UNICODE_STR_VALUES(0x4E, 0x004E, "LATIN CAPITAL LETTER N"),
WCP_UNICODE_STR_VALUES(0x4F, 0x004F, "LATIN CAPITAL LETTER O"),
WCP_UNICODE_STR_VALUES(0x50, 0x0050, "LATIN CAPITAL LETTER P"),
WCP_UNICODE_STR_VALUES(0x51, 0x0051, "LATIN CAPITAL LETTER Q"),
WCP_UNICODE_STR_VALUES(0x52, 0x0052, "LATIN CAPITAL LETTER R"),
WCP_UNICODE_STR_VALUES(0x53, 0x0053, "LATIN CAPITAL LETTER S"),
WCP_UNICODE_STR_VALUES(0x54, 0x0054, "LATIN CAPITAL LETTER T"),
WCP_UNICODE_STR_VALUES(0x55, 0x0055, "LATIN CAPITAL LETTER U"),
WCP_UNICODE_STR_VALUES(0x56, 0x0056, "LATIN CAPITAL LETTER V"),
WCP_UNICODE_STR_VALUES(0x57, 0x0057, "LATIN CAPITAL LETTER W"),
WCP_UNICODE_STR_VALUES(0x58, 0x0058, "LATIN CAPITAL LETTER X"),
WCP_UNICODE_STR_VALUES(0x59, 0x0059, "LATIN CAPITAL LETTER Y"),
WCP_UNICODE_STR_VALUES(0x5A, 0x005A, "LATIN CAPITAL LETTER Z"),
WCP_UNICODE_STR_VALUES(0x5B, 0x005B, "LEFT SQUARE BRACKET"),
WCP_UNICODE_STR_VALUES(0x5C, 0x005C, "REVERSE SOLIDUS"),
WCP_UNICODE_STR_VALUES(0x5D, 0x005D, "RIGHT SQUARE BRACKET"),
WCP_UNICODE_STR_VALUES(0x5E, 0x005E, "CIRCUMFLEX ACCENT"),
WCP_UNICODE_STR_VALUES(0x5F, 0x005F, "LOW LINE"),
WCP_UNICODE_STR_VALUES(0x60, 0x0060, "GRAVE ACCENT"),
WCP_UNICODE_STR_VALUES(0x61, 0x0061, "LATIN SMALL LETTER A"),
WCP_UNICODE_STR_VALUES(0x62, 0x0062, "LATIN SMALL LETTER B"),
WCP_UNICODE_STR_VALUES(0x63, 0x0063, "LATIN SMALL LETTER C"),
WCP_UNICODE_STR_VALUES(0x64, 0x0064, "LATIN SMALL LETTER D"),
WCP_UNICODE_STR_VALUES(0x65, 0x0065, "LATIN SMALL LETTER E"),
WCP_UNICODE_STR_VALUES(0x66, 0x0066, "LATIN SMALL LETTER F"),
WCP_UNICODE_STR_VALUES(0x67, 0x0067, "LATIN SMALL LETTER G"),
WCP_UNICODE_STR_VALUES(0x68, 0x0068, "LATIN SMALL LETTER H"),
WCP_UNICODE_STR_VALUES(0x69, 0x0069, "LATIN SMALL LETTER I"),
WCP_UNICODE_STR_VALUES(0x6A, 0x006A, "LATIN SMALL LETTER J"),
WCP_UNICODE_STR_VALUES(0x6B, 0x006B, "LATIN SMALL LETTER K"),
WCP_UNICODE_STR_VALUES(0x6C, 0x006C, "LATIN SMALL LETTER L"),
WCP_UNICODE_STR_VALUES(0x6D, 0x006D, "LATIN SMALL LETTER M"),
WCP_UNICODE_STR_VALUES(0x6E, 0x006E, "LATIN SMALL LETTER N"),
WCP_UNICODE_STR_VALUES(0x6F, 0x006F, "LATIN SMALL LETTER O"),
WCP_UNICODE_STR_VALUES(0x70, 0x0070, "LATIN SMALL LETTER P"),
WCP_UNICODE_STR_VALUES(0x71, 0x0071, "LATIN SMALL LETTER Q"),
WCP_UNICODE_STR_VALUES(0x72, 0x0072, "LATIN SMALL LETTER R"),
WCP_UNICODE_STR_VALUES(0x73, 0x0073, "LATIN SMALL LETTER S"),
WCP_UNICODE_STR_VALUES(0x74, 0x0074, "LATIN SMALL LETTER T"),
WCP_UNICODE_STR_VALUES(0x75, 0x0075, "LATIN SMALL LETTER U"),
WCP_UNICODE_STR_VALUES(0x76, 0x0076, "LATIN SMALL LETTER V"),
WCP_UNICODE_STR_VALUES(0x77, 0x0077, "LATIN SMALL LETTER W"),
WCP_UNICODE_STR_VALUES(0x78, 0x0078, "LATIN SMALL LETTER X"),
WCP_UNICODE_STR_VALUES(0x79, 0x0079, "LATIN SMALL LETTER Y"),
WCP_UNICODE_STR_VALUES(0x7A, 0x007A, "LATIN SMALL LETTER Z"),
WCP_UNICODE_STR_VALUES(0x7B, 0x007B, "LEFT CURLY BRACKET"),
WCP_UNICODE_STR_VALUES(0x7C, 0x007C, "VERTICAL LINE"),
WCP_UNICODE_STR_VALUES(0x7D, 0x007D, "RIGHT CURLY BRACKET"),
WCP_UNICODE_STR_VALUES(0x7E, 0x007E, "TILDE"),
WCP_UNICODE_STR_VALUES(0x7F, 0x007F, "DELETE"),
WCP_UNICODE_STR_VALUES(0x80, 0x0410, "CYRILLIC CAPITAL LETTER A"),
WCP_UNICODE_STR_VALUES(0x81, 0x0411, "CYRILLIC CAPITAL LETTER BE"),
WCP_UNICODE_STR_VALUES(0x82, 0x0412, "CYRILLIC CAPITAL LETTER VE"),
WCP_UNICODE_STR_VALUES(0x83, 0x0413, "CYRILLIC CAPITAL LETTER GHE"),
WCP_UNICODE_STR_VALUES(0x84, 0x0414, "CYRILLIC CAPITAL LETTER DE"),
WCP_UNICODE_STR_VALUES(0x85, 0x0415, "CYRILLIC CAPITAL LETTER IE"),
WCP_UNICODE_STR_VALUES(0x86, 0x0416, "CYRILLIC CAPITAL LETTER ZHE"),
WCP_UNICODE_STR_VALUES(0x87, 0x0417, "CYRILLIC CAPITAL LETTER ZE"),
WCP_UNICODE_STR_VALUES(0x88, 0x0418, "CYRILLIC CAPITAL LETTER I"),
WCP_UNICODE_STR_VALUES(0x89, 0x0419, "CYRILLIC CAPITAL LETTER SHORT I"),
WCP_UNICODE_STR_VALUES(0x8A, 0x041A, "CYRILLIC CAPITAL LETTER KA"),
WCP_UNICODE_STR_VALUES(0x8B, 0x041B, "CYRILLIC CAPITAL LETTER EL"),
WCP_UNICODE_STR_VALUES(0x8C, 0x041C, "CYRILLIC CAPITAL LETTER EM"),
WCP_UNICODE_STR_VALUES(0x8D, 0x041D, "CYRILLIC CAPITAL LETTER EN"),
WCP_UNICODE_STR_VALUES(0x8E, 0x041E, "CYRILLIC CAPITAL LETTER O"),
WCP_UNICODE_STR_VALUES(0x8F, 0x041F, "CYRILLIC CAPITAL LETTER PE"),
WCP_UNICODE_STR_VALUES(0x90, 0x0420, "CYRILLIC CAPITAL LETTER ER"),
WCP_UNICODE_STR_VALUES(0x91, 0x0421, "CYRILLIC CAPITAL LETTER ES"),
WCP_UNICODE_STR_VALUES(0x92, 0x0422, "CYRILLIC CAPITAL LETTER TE"),
WCP_UNICODE_STR_VALUES(0x93, 0x0423, "CYRILLIC CAPITAL LETTER U"),
WCP_UNICODE_STR_VALUES(0x94, 0x0424, "CYRILLIC CAPITAL LETTER EF"),
WCP_UNICODE_STR_VALUES(0x95, 0x0425, "CYRILLIC CAPITAL LETTER HA"),
WCP_UNICODE_STR_VALUES(0x96, 0x0426, "CYRILLIC CAPITAL LETTER TSE"),
WCP_UNICODE_STR_VALUES(0x97, 0x0427, "CYRILLIC CAPITAL LETTER CHE"),
WCP_UNICODE_STR_VALUES(0x98, 0x0428, "CYRILLIC CAPITAL LETTER SHA"),
WCP_UNICODE_STR_VALUES(0x99, 0x0429, "CYRILLIC CAPITAL LETTER SHCHA"),
WCP_UNICODE_STR_VALUES(0x9A, 0x042A, "CYRILLIC CAPITAL LETTER HARD SIGN"),
WCP_UNICODE_STR_VALUES(0x9B, 0x042B, "CYRILLIC CAPITAL LETTER YERU"),
WCP_UNICODE_STR_VALUES(0x9C, 0x042C, "CYRILLIC CAPITAL LETTER SOFT SIGN"),
WCP_UNICODE_STR_VALUES(0x9D, 0x042D, "CYRILLIC CAPITAL LETTER E"),
WCP_UNICODE_STR_VALUES(0x9E, 0x042E, "CYRILLIC CAPITAL LETTER YU"),
WCP_UNICODE_STR_VALUES(0x9F, 0x042F, "CYRILLIC CAPITAL LETTER YA"),
WCP_UNICODE_STR_VALUES(0xA0, 0x2020, "DAGGER"),
WCP_UNICODE_STR_VALUES(0xA1, 0x00B0, "DEGREE SIGN"),
WCP_UNICODE_STR_VALUES(0xA2, 0x00A2, "CENT SIGN"),
WCP_UNICODE_STR_VALUES(0xA3, 0x00A3, "POUND SIGN"),
WCP_UNICODE_STR_VALUES(0xA4, 0x00A7, "SECTION SIGN"),
WCP_UNICODE_STR_VALUES(0xA5, 0x2022, "BULLET"),
WCP_UNICODE_STR_VALUES(0xA6, 0x00B6, "PILCROW SIGN"),
WCP_UNICODE_STR_VALUES(0xA7, 0x0406, "CYRILLIC CAPITAL LETTER BYELORUSSIAN-UKRAINIAN I"),
WCP_UNICODE_STR_VALUES(0xA8, 0x00AE, "REGISTERED SIGN"),
WCP_UNICODE_STR_VALUES(0xA9, 0x00A9, "COPYRIGHT SIGN"),
WCP_UNICODE_STR_VALUES(0xAA, 0x2122, "TRADE MARK SIGN"),
WCP_UNICODE_STR_VALUES(0xAB, 0x0402, "CYRILLIC CAPITAL LETTER DJE"),
WCP_UNICODE_STR_VALUES(0xAC, 0x0452, "CYRILLIC SMALL LETTER DJE"),
WCP_UNICODE_STR_VALUES(0xAD, 0x2260, "NOT EQUAL TO"),
WCP_UNICODE_STR_VALUES(0xAE, 0x0403, "CYRILLIC CAPITAL LETTER GJE"),
WCP_UNICODE_STR_VALUES(0xAF, 0x0453, "CYRILLIC SMALL LETTER GJE"),
WCP_UNICODE_STR_VALUES(0xB0, 0x221E, "INFINITY"),
WCP_UNICODE_STR_VALUES(0xB1, 0x00B1, "PLUS-MINUS SIGN"),
WCP_UNICODE_STR_VALUES(0xB2, 0x2264, "LESS-THAN OR EQUAL TO"),
WCP_UNICODE_STR_VALUES(0xB3, 0x2265, "GREATER-THAN OR EQUAL TO"),
WCP_UNICODE_STR_VALUES(0xB4, 0x0456, "CYRILLIC SMALL LETTER BYELORUSSIAN-UKRAINIAN I"),
WCP_UNICODE_STR_VALUES(0xB5, 0x00B5, "MICRO SIGN"),
WCP_UNICODE_STR_VALUES(0xB6, 0x2202, "PARTIAL DIFFERENTIAL"),
WCP_UNICODE_STR_VALUES(0xB7, 0x0408, "CYRILLIC CAPITAL LETTER JE"),
WCP_UNICODE_STR_VALUES(0xB8, 0x0404, "CYRILLIC CAPITAL LETTER UKRAINIAN IE"),
WCP_UNICODE_STR_VALUES(0xB9, 0x0454, "CYRILLIC SMALL LETTER UKRAINIAN IE"),
WCP_UNICODE_STR_VALUES(0xBA, 0x0407, "CYRILLIC CAPITAL LETTER YI"),
WCP_UNICODE_STR_VALUES(0xBB, 0x0457, "CYRILLIC SMALL LETTER YI"),
WCP_UNICODE_STR_VALUES(0xBC, 0x0409, "CYRILLIC CAPITAL LETTER LJE"),
WCP_UNICODE_STR_VALUES(0xBD, 0x0459, "CYRILLIC SMALL LETTER LJE"),
WCP_UNICODE_STR_VALUES(0xBE, 0x040A, "CYRILLIC CAPITAL LETTER NJE"),
WCP_UNICODE_STR_VALUES(0xBF, 0x045A, "CYRILLIC SMALL LETTER NJE"),
WCP_UNICODE_STR_VALUES(0xC0, 0x0458, "CYRILLIC SMALL LETTER JE"),
WCP_UNICODE_STR_VALUES(0xC1, 0x0405, "CYRILLIC CAPITAL LETTER DZE"),
WCP_UNICODE_STR_VALUES(0xC2, 0x00AC, "NOT SIGN"),
WCP_UNICODE_STR_VALUES(0xC3, 0x221A, "SQUARE ROOT"),
WCP_UNICODE_STR_VALUES(0xC4, 0x0192, "LATIN SMALL LETTER F WITH HOOK"),
WCP_UNICODE_STR_VALUES(0xC5, 0x2248, "ALMOST EQUAL TO"),
WCP_UNICODE_STR_VALUES(0xC6, 0x2206, "INCREMENT"),
WCP_UNICODE_STR_VALUES(0xC7, 0x00AB, "LEFT-POINTING DOUBLE ANGLE QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0xC8, 0x00BB, "RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0xC9, 0x2026, "HORIZONTAL ELLIPSIS"),
WCP_UNICODE_STR_VALUES(0xCA, 0x00A0, "NO-BREAK SPACE"),
WCP_UNICODE_STR_VALUES(0xCB, 0x040B, "CYRILLIC CAPITAL LETTER TSHE"),
WCP_UNICODE_STR_VALUES(0xCC, 0x045B, "CYRILLIC SMALL LETTER TSHE"),
WCP_UNICODE_STR_VALUES(0xCD, 0x040C, "CYRILLIC CAPITAL LETTER KJE"),
WCP_UNICODE_STR_VALUES(0xCE, 0x045C, "CYRILLIC SMALL LETTER KJE"),
WCP_UNICODE_STR_VALUES(0xCF, 0x0455, "CYRILLIC SMALL LETTER DZE"),
WCP_UNICODE_STR_VALUES(0xD0, 0x2013, "EN DASH"),
WCP_UNICODE_STR_VALUES(0xD1, 0x2014, "EM DASH"),
WCP_UNICODE_STR_VALUES(0xD2, 0x201C, "LEFT DOUBLE QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0xD3, 0x201D, "RIGHT DOUBLE QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0xD4, 0x2018, "LEFT SINGLE QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0xD5, 0x2019, "RIGHT SINGLE QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0xD6, 0x00F7, "DIVISION SIGN"),
WCP_UNICODE_STR_VALUES(0xD7, 0x201E, "DOUBLE LOW-9 QUOTATION MARK"),
WCP_UNICODE_STR_VALUES(0xD8, 0x040E, "CYRILLIC CAPITAL LETTER SHORT U"),
WCP_UNICODE_STR_VALUES(0xD9, 0x045E, "CYRILLIC SMALL LETTER SHORT U"),
WCP_UNICODE_STR_VALUES(0xDA, 0x040F, "CYRILLIC CAPITAL LETTER DZHE"),
WCP_UNICODE_STR_VALUES(0xDB, 0x045F, "CYRILLIC SMALL LETTER DZHE"),
WCP_UNICODE_STR_VALUES(0xDC, 0x2116, "NUMERO SIGN"),
WCP_UNICODE_STR_VALUES(0xDD, 0x0401, "CYRILLIC CAPITAL LETTER IO"),
WCP_UNICODE_STR_VALUES(0xDE, 0x0451, "CYRILLIC SMALL LETTER IO"),
WCP_UNICODE_STR_VALUES(0xDF, 0x044F, "CYRILLIC SMALL LETTER YA"),
WCP_UNICODE_STR_VALUES(0xE0, 0x0430, "CYRILLIC SMALL LETTER A"),
WCP_UNICODE_STR_VALUES(0xE1, 0x0431, "CYRILLIC SMALL LETTER BE"),
WCP_UNICODE_STR_VALUES(0xE2, 0x0432, "CYRILLIC SMALL LETTER VE"),
WCP_UNICODE_STR_VALUES(0xE3, 0x0433, "CYRILLIC SMALL LETTER GHE"),
WCP_UNICODE_STR_VALUES(0xE4, 0x0434, "CYRILLIC SMALL LETTER DE"),
WCP_UNICODE_STR_VALUES(0xE5, 0x0435, "CYRILLIC SMALL LETTER IE"),
WCP_UNICODE_STR_VALUES(0xE6, 0x0436, "CYRILLIC SMALL LETTER ZHE"),
WCP_UNICODE_STR_VALUES(0xE7, 0x0437, "CYRILLIC SMALL LETTER ZE"),
WCP_UNICODE_STR_VALUES(0xE8, 0x0438, "CYRILLIC SMALL LETTER I"),
WCP_UNICODE_STR_VALUES(0xE9, 0x0439, "CYRILLIC SMALL LETTER SHORT I"),
WCP_UNICODE_STR_VALUES(0xEA, 0x043A, "CYRILLIC SMALL LETTER KA"),
WCP_UNICODE_STR_VALUES(0xEB, 0x043B, "CYRILLIC SMALL LETTER EL"),
WCP_UNICODE_STR_VALUES(0xEC, 0x043C, "CYRILLIC SMALL LETTER EM"),
WCP_UNICODE_STR_VALUES(0xED, 0x043D, "CYRILLIC SMALL LETTER EN"),
WCP_UNICODE_STR_VALUES(0xEE, 0x043E, "CYRILLIC SMALL LETTER O"),
WCP_UNICODE_STR_VALUES(0xEF, 0x043F, "CYRILLIC SMALL LETTER PE"),
WCP_UNICODE_STR_VALUES(0xF0, 0x0440, "CYRILLIC SMALL LETTER ER"),
WCP_UNICODE_STR_VALUES(0xF1, 0x0441, "CYRILLIC SMALL LETTER ES"),
WCP_UNICODE_STR_VALUES(0xF2, 0x0442, "CYRILLIC SMALL LETTER TE"),
WCP_UNICODE_STR_VALUES(0xF3, 0x0443, "CYRILLIC SMALL LETTER U"),
WCP_UNICODE_STR_VALUES(0xF4, 0x0444, "CYRILLIC SMALL LETTER EF"),
WCP_UNICODE_STR_VALUES(0xF5, 0x0445, "CYRILLIC SMALL LETTER HA"),
WCP_UNICODE_STR_VALUES(0xF6, 0x0446, "CYRILLIC SMALL LETTER TSE"),
WCP_UNICODE_STR_VALUES(0xF7, 0x0447, "CYRILLIC SMALL LETTER CHE"),
WCP_UNICODE_STR_VALUES(0xF8, 0x0448, "CYRILLIC SMALL LETTER SHA"),
WCP_UNICODE_STR_VALUES(0xF9, 0x0449, "CYRILLIC SMALL LETTER SHCHA"),
WCP_UNICODE_STR_VALUES(0xFA, 0x044A, "CYRILLIC SMALL LETTER HARD SIGN"),
WCP_UNICODE_STR_VALUES(0xFB, 0x044B, "CYRILLIC SMALL LETTER YERU"),
WCP_UNICODE_STR_VALUES(0xFC, 0x044C, "CYRILLIC SMALL LETTER SOFT SIGN"),
WCP_UNICODE_STR_VALUES(0xFD, 0x044D, "CYRILLIC SMALL LETTER E"),
WCP_UNICODE_STR_VALUES(0xFE, 0x044E, "CYRILLIC SMALL LETTER YU"),
WCP_UNICODE_STR_VALUES(0xFF, 0x00A4, "CURRENCY SIGN")
};
/*
 NOTES during the processing of this file:
Inserted standard control values (0,32]...
Inserted Undefined values in range (127,127]...
The WCP values in this file were forced CONSECUTIVE.
*/