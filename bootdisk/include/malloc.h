/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: malloc.h		Storage Management Functions  
*/
#ifndef HEADERtype
#include <type.h>
#endif	/*  HEADERtype  */

/*  high level storage management functions  */
#define	malloc(size)	alloc(size)
extern	char	*alloc(); 
extern	VOID	free();

/*  low  level storage management functions  */
extern	char	*sbrk();
extern	VOID	rsvstk();

