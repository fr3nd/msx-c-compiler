/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: setjmp.h		Longjmp Support
*/
#ifndef	HEADERsetjmp
#define HEADERsetjmp

#ifndef	HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

typedef	int	jmp_buf[2];

extern	int	setjmp();
extern	VOID	longjmp();

#endif	/*  HEADERsetjmp  */

