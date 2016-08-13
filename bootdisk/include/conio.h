/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: conio.h		Console and I/O Port Functions
*/
#ifndef HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

extern	char	getch(), getche();
extern	BOOL	kbhit();
extern	VOID	sensebrk();
extern	char	inp();
extern	VOID	outp();

