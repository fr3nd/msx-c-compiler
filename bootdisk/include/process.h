/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: process.h		Process Control Functions
*/
#ifndef HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

extern	VOID	execl(.), execlp(.);
extern	VOID	execv(),  execvp();
extern	VOID	exit(), _exit();

