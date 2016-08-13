/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: stdlib.h		Standard Library
*/
#ifndef HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

extern	char	*getenv();
extern	STATUS	putenv();

extern	int	abs(), max(), min(), atoi();
extern	VOID	qsort(), perror();

