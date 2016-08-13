/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: stdio.h		Buffered Input/Output Functions
*/
#ifndef HEADERstdio		/*  referenced for 'typedef FILE'  */
#define HEADERstdio

#ifndef HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

typedef	struct  {
	TINY	serial;		/* is not 0 when serial device	*/
	char	mode;		/* file mode - R, W, R/W	*/
	char	*ptr;		/* next character position	*/
	int	count;		/* number of characters left	*/
	char	*base;		/* location of buffer		*/
	FD	fd;		/* file descriptor		*/
	size_t	bufsiz;		/* size of bufer		*/
} FILE;

#define _NFILES         15      /* maximum number of buffered I/O */
#define BUFSIZ          1024    /* default buffer size of fopen */
#define	SERIBUF		256	/* buffer size for device */

extern	char	_buffs[_NFILES];
extern  FILE    _iob[_NFILES];

#define stdin   (&_iob[0])
#define stdout  (&_iob[1])
#define stderr  (&_iob[2])
#define stdaux  (&_iob[3])
#define stdprn  (&_iob[4])

#define EOF	(-1)
#define CPMEOF	'\032'		/* EOF char ^Z  */

#define ungetch ugetch  /* for poor linker with 6 chars symbol */
#define fcloseall fclosall

/****** buffered I/O functions ******/
extern	FILE    *fopen(.);
extern	int     getc(),     getchar();
extern	char    *fgets(),   *gets();
extern	int     fscanf(.),  scanf(.);
extern	STATUS  putc(),     putchar(),
		fputs(),    puts(),
		fprintf(.), printf(.);
extern	STATUS  ungetc(),   ungetch();
extern	STATUS  fclose();
extern	TINY	fcloseall();

extern	int	fread(), fwrite();
extern	STATUS	fflush();
extern	TINY	flushall();
extern	STATUS  fsetbin(), fsettext();  /* non-standard */
extern	STATUS	setvbuf();
extern	VOID	setbuf();
extern	VOID	clearerr();

/*  FILE.mode  bit assignment  */
#define	_IOREAD		0x01
#define	_IOWRT		0x02
#define _IOEOF		0x04
#define _IOOVF		0x08
#define _BINARY		0x10
#define _IOMYBUF	0x20

/*  FILE.serial  bit assignment  */
#define	_IOSERI		0x01
#define _IONBF		0x04	/*  no buffering    */
#define _IOLBF		0x40	/*  line buffering  */
#define _IOFBF		0x00	/*  full buffering  */

#define	fileno(fp)	((fp)->fd)
#define feof(fp)	(((fp)->mode & _IOEOF) != 0)
#define	ferror(fp)	(((fp)->mode & _IOOVF) != 0)

#ifndef DIVHEADER
#include <conio.h>
#include <ctype.h>
#include <direct.h>
#include <io.h>
#include <memory.h>
#include <malloc.h>
#include <process.h>
#include <setjmp.h>
#include <stdlib.h>
#include <string.h>
#endif	/*  DIVHEADER  */

#endif	/*  HEADERstdio  */

