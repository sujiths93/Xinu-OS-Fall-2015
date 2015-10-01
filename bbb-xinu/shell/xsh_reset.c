#include<xinu.h>
shellcmd xsh_reset(int nargs,char *args[])
{
if(nargs>1)
{
	kprintf("Please enter the correct number of parameters.");
}
volatile uint32 *prm_rstctrl=(volatile uint32 *)0x44E00F00;
*prm_rstctrl=0x01;
}

