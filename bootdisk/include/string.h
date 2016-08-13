/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: string.h		String Mnipulate Functions
*/
#ifndef HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

extern	int     strcmp(), strncmp();
extern	size_t  strlen();
extern	char	*strcat(),  *strcpy(), *strchr();
extern	char	*strncat(), *strncpy();
extern	char	*strlwr(), *strupr();

extern	VOID	sprintf(.);
extern	int	sscanf(.);

