/*
	(C) Copyright by ASCII Corporation, 1989
		All rights Reserved.

	File: type.h		Common Types and Constants
*/
#ifndef	HEADERtype
#define	HEADERtype

#define NULL    0               /* constant for pointer */

typedef	char	TINY;
typedef	char	VOID;
typedef	unsigned size_t;

typedef	char	BOOL;
#define TRUE	1		/* constants for BOOL */
#define FALSE	0
#define YES	1
#define NO	0

typedef	char    STATUS;
#define OK		 0	/* constants for STATUS */
#define ERROR		-1
#define WILDCARD	-2

typedef	int	FD;		/*  file discripter type  */

#endif	/*  HEADERtype  */
