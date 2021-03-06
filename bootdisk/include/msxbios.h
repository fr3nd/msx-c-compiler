typedef unsigned NAT;

typedef struct _regs {
	TINY	f;
	TINY	a;
	NAT	bc;
	NAT	de;
	NAT	hl;
} REGS;

#define	fnkstr(n)	((char *)0xf86f+16*(n))
#define	msx2()		(*(TINY *)0xfaf8)

VOID	calbio();
VOID	calbas();
VOID	calsub();
VOID	calslt();
TINY	rdslt();
VOID	wrslt();
VOID	callx();
VOID	inifnk();
VOID	disscr();
VOID	enascr();
VOID	screen();
VOID	gicini();
VOID	sound();
TINY	rdpsg();
BOOL	chsns();
char	chget();
VOID	chput();
BOOL	lptout();
BOOL	lptstt();
char	*pinlin();
char	*inlin();
TINY	breakx();
VOID	beep();
VOID	cls();
VOID	locate();
VOID	erafnk();
VOID	dspfnk();
TINY	gtstck();
BOOL	gttrig();
TINY	gtpad();
TINY	gtpdl();
VOID	chgsnd();
TINY	snsmat();
VOID	kilbuf();
NAT	rnd();
VOID	di();
VOID	ei();
           