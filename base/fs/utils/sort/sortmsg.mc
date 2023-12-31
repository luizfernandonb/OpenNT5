;/*++ BUILD Version: 0001    // Increment this if a change has global effects
;
;Copyright (c) 1998  Microsoft Corporation
;
;Module Name:
;
;    sort.h
;
;Abstract:
;
;    This file contains the message definitions for the Win32 SORT.EXE
;    program.
;
;Author:
;
;    Rod Gamache (rodga) 7-May-1998
;
;Revision History:
;
;Notes:
;
;    This file is generated by the MC tool from the sort.mc file.
;
;--*/
;
;#ifndef _SORTMSG_
;#define _SORTMSG_
;
;

MessageId=7400 SymbolicName=MSG_SORT_USAGE1
Language=English
SORT [/R] [/+n] [/M kilobytes] [/L locale] [/REC recordbytes]
  [[drive1:][path1]filename1] [/T [drive2:][path2]]
  [/O [drive3:][path3]filename3]
  /+n                         Specifies the character number, n, to
                              begin each comparison.  /+3 indicates that
                              each comparison should begin at the 3rd
                              character in each line.  Lines with fewer
                              than n characters collate before other lines.
                              By default comparisons start at the first
                              character in each line.
  /L[OCALE] locale            Overrides the system default locale with
                              the specified one.  The ""C"" locale yields
                              the fastest collating sequence and is
                              currently the only alternative.  The sort
                              is always case insensitive.
  /M[EMORY] kilobytes         Specifies amount of main memory to use for
                              the sort, in kilobytes.  The memory size is
                              always constrained to be a minimum of 160
                              kilobytes.  If the memory size is specified
                              the exact amount will be used for the sort,
                              regardless of how much main memory is
                              available.

                              The best performance is usually achieved by
                              not specifying a memory size.  By default the
                              sort will be done with one pass (no temporary
                              file) if it fits in the default maximum
                              memory size, otherwise the sort will be done
                              in two passes (with the partially sorted data
                              being stored in a temporary file) such that
                              the amounts of memory used for both the sort
                              and merge passes are equal.  The default
                              maximum memory size is 90% of available main
                              memory if both the input and output are
                              files, and 45% of main memory otherwise.
.

MessageId=7415 SymbolicName=MSG_SORT_USAGE2
Language=English
  /REC[ORD_MAXIMUM] characters Specifies the maximum number of characters
                              in a record (default 4096, maximum 65535).
  /R[EVERSE]                  Reverses the sort order; that is,
                              sorts Z to A, then 9 to 0.
  [drive1:][path1]filename1   Specifies the file to be sorted.  If not
                              specified, the standard input is sorted.
                              Specifying the input file is faster than
                              redirecting the same file as standard input.
  /T[EMPORARY]
    [drive2:][path2]          Specifies the path of the directory to hold
                              the sort's working storage, in case the data
                              does not fit in main memory.  The default is
                              to use the system temporary directory.
  /O[UTPUT]
    [drive3:][path3]filename3 Specifies the file where the sorted input is
                              to be stored.  If not specified, the data is
                              written to the standard output.   Specifying
                              the output file is faster than redirecting
                              standard output to the same file.
.

MessageId=7401 SymbolicName=MSG_SORT_REC_TOO_BIG
Language=English
Input record exceeds maximum length.  Specify larger maximum.
.

MessageId=7402 SymbolicName=MSG_SORT_INVALID_LOCALE
Language=English
Invalid locale.
.

MessageId=7403 SymbolicName=MSG_SORT_POSITION
Language=English
Sort position must be greater than zero.
.

MessageId=7404 SymbolicName=MSG_SORT_INVALID_SWITCH
Language=English
Invalid switch.
.

MessageId=7405 SymbolicName=MSG_SORT_MAX_TOO_LARGE
Language=English
Record maximum cannot exceed 65535.
.

MessageId=7406 SymbolicName=MSG_SORT_ONE_INPUT
Language=English
Input file specified two times.
.

MessageId=7407 SymbolicName=MSG_SORT_CHAR_CONVERSION
Language=English
Internal character conversion error.
.

MessageId=7408 SymbolicName=MSG_SORT_NOT_ENOUGH_MEMORY
Language=English
Not enough main memory to complete the sort.
.

MessageId=7409 SymbolicName=MSG_SORT_REDIRECT_INPUT
Language=English
Warning: use of redirected input for large sorts is usually slower than specifying the input file name directly to sort.
.

MessageId=7410 SymbolicName=MSG_SORT_REDIRECT_OUTPUT
Language=English
Warning: use of redirected output for large sorts is usually slower than specifying the output file name directly to sort.
.

MessageId=7411 SymbolicName=MSG_SORT_MEM_TOO_LOW
Language=English
Warning: the specified memory size is too low and will be adjusted to the minimum.
.

MessageId=7412 SymbolicName=MSG_SORT_MEM_GT_PAGE
Language=English
Warning: the specifed memory size is being reduced to the available paging memory.
.

MessageId=7413 SymbolicName=MSG_SORT_INPUT_FILE
Language=English
<input file>
.

MessageId=7414 SymbolicName=MSG_SORT_OUTPUT_FILE
Language=English
<output file>
.

;// MessageId 7415 used above for help.

;#endif // _SORTMSG_

