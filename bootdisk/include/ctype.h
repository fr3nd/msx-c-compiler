/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: ctype.h		Character Type Header
*/
#define isupper(c)      ('A' <= (c) && (c) <= 'Z')
#define islower(c)      ('a' <= (c) && (c) <= 'z')
#define isdigit(c)      ('0' <= (c) && (c) <= '9')
#define	isxdigit(c)	(isdigit(c) || 'a' <= (c) && (c) <= 'f'\
				    || 'A' <= (c) && (c) <= 'F')
#define isspace(c)      ((c) == ' ' || '\t' <= (c) && (c) <= '\r')
#define iscntrl(c)      ((c) < ' ' || (c) == '\177')
#define isalpha(c)      (isupper(c) || islower(c))
#define	isalnum(c)	(isalpha(c) || isdigit(c))

extern	char    toupper(), tolower();

/*  kanji first byte   0x81~0x9f 0xe0~0xfc  */
#define	iskanji(c)	('\201' <= (c) && (c) <= '\237'\
				|| '\340' <= (c) && (c) <= '\374')

/*  kanji second byte  0x40~0x7e 0x80~0xfc  */
#define	iskanji2(c)	('\100' <= (c) && (c) <= '\176'\
				|| '\200' <= (c) && (c) <= '\374')

