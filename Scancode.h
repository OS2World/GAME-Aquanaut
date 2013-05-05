/*
** This array of character strings defines the cap tops that correspond
** to the scan codes of an IBM 101 keyboard.  Undefined values are 
** recognised by "???" strings.
*/
PCHAR szScanCode[] = {
									/*   0 */	   "???",
									/*   1 */      "Escape",
									/*   2 */	   "1",
									/*   3 */	   "2",
									/*   4 */	   "3",
									/*   5 */	   "4",
									/*   6 */	   "5",
									/*   7 */	   "6",
									/*   8 */	   "7",
									/*   9 */	   "8",
									/*  10 */	   "9",
									/*  11 */	   "0",
									/*  12 */	   "-",
									/*  13 */	   "=",
									/*  14 */	   "Backspace",
									/*  15 */	   "Tab",
									/*  16 */	   "Q",
									/*  17 */	   "W",
									/*  18 */	   "E",
									/*  19 */	   "R",
									/*  20 */	   "T",
									/*  21 */	   "Y",
									/*  22 */	   "U",
									/*  23 */	   "I",
									/*  24 */	   "O",
									/*  25 */	   "P",
									/*  26 */	   "[",
									/*  27 */	   "]",
									/*  28 */	   "Enter",
									/*  29 */	   "Ctrl (L)",
									/*  30 */	   "A",
									/*  31 */	   "S",
									/*  32 */	   "D",
									/*  33 */	   "F",
									/*  34 */	   "G",
									/*  35 */	   "H",
									/*  36 */	   "J",
									/*  37 */	   "K",
									/*  38 */	   "L",
									/*  39 */	   ";",
									/*  40 */	   "'",
									/*  41 */	   "`",
									/*  42 */	   "Shift (L)",
									/*  43 */	   "\\",
									/*  44 */	   "Z",
									/*  45 */	   "X",
									/*  46 */	   "C",
									/*  47 */	   "V",
									/*  48 */	   "B",
									/*  49 */	   "N",
									/*  50 */	   "M",
									/*  51 */	   ",",
									/*  52 */	   ".",
									/*  53 */	   "/",
									/*  54 */	   "Shift (R)",
									/*  55 */	   "*",
									/*  56 */	   "Alt (L)",
									/*  57 */	   "Space",
									/*  58 */	   "Caps Lock",
									/*  59 */	   "F1",
									/*  60 */	   "F2",
									/*  61 */	   "F3",
									/*  62 */	   "F4",
									/*  63 */	   "F5",
									/*  64 */	   "F6",
									/*  65 */	   "F7",
									/*  66 */	   "F8",
									/*  67 */	   "F9",
									/*  68 */	   "F10",
									/*  69 */	   "Num Lock",
									/*  70 */	   "Scroll Lock",
									/*  71 */	   "Home",
									/*  72 */	   "Up",
									/*  73 */	   "Pg Up",
									/*  74 */	   "-",
									/*  75 */	   "Left",
									/*  76 */	   "5",
									/*  77 */	   "Right",
									/*  78 */	   "+",
									/*  79 */	   "End",
									/*  80 */	   "Down",
									/*  81 */	   "Pg Dn",
									/*  82 */	   "Ins",
									/*  83 */	   "Del",
									/*  84 */	   "???",
									/*  85 */	   "???",
									/*  86 */	   "???",
									/*  87 */	   "F11",
									/*  88 */	   "F12",
									/*  89 */	   "???",
									/*  90 */	   "Enter",
									/*  91 */	   "Ctrl (R)",
									/*  92 */	   "/",
									/*  93 */	   "Prnt Scrn",
									/*  94 */	   "Alt (R)",
									/*  95 */	   "???",
									/*  96 */	   "Home",
									/*  97 */	   "Up",
									/*  98 */	   "Page Up",
									/*  99 */	   "Left",
									/* 100 */	   "Right",
									/* 101 */	   "End",
									/* 102 */	   "Down",
									/* 103 */	   "Page Down",
									/* 104 */	   "Insert",
									/* 105 */	   "Delete"
								 };

#define MAX_SCANCODE sizeof(szScanCode)/sizeof(PCHAR)