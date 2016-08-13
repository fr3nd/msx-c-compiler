/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: io.h		Low Level File Input/Output Functions
*/
#ifndef HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

extern	FD	open(), creat();
extern	STATUS	close();
extern	int	read(), write();
extern	STATUS	rename(), unlink();
extern	TINY	eof();
extern	BOOL	isatty();

/*  open file flags  */
#define O_RDONLY	(0)
#define O_WRONLY	(1)
#define O_RDWR		(2)

/* Standard File Handles */
#define	STDIN	(FD)0	/* Standard input  channel	*/
#define	STDOUT	(FD)1	/* Standard output channel	*/
#define	STDERR	(FD)2	/* Standard error  channel	*/
#define	STDAUX	(FD)3	/* Auxilliary I/O  channel	*/
#define	STDPRN	(FD)4	/* Standard list   channel	*/
#define	STDLST	(FD)4	/* Standard list   channel	*/

