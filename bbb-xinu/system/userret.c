/* userret.c - userret */

#include <myversion.h>
char *track;
/*------------------------------------------------------------------------
 *  userret  -  Called when a process returns from the top-level function
 *------------------------------------------------------------------------
 */
void	userret(void)
{
/*MY VERSION*/
	int cnt=0;

while(*track!='F')
{
			
		--track;
		++cnt;
}
printf("Number of bytes occupied is %d",cnt);





	kill(getpid());			/* Force process to exit */
}
