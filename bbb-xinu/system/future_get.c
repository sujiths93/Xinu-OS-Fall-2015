#include <future.h>



syscall future_get(future *f,int *value)
{
	
	
	if(f->state==FUTURE_EMPTY)
	{
	//printf("\n\nENTERING empty\n\n");
	 f->tid=getpid();
	 f->state=1;
	
	 return OK;
	}
	
	if(f->state==FUTURE_VALID)
{	
	 *value=f->value;
	 //printf("\n\nENTERING VALID\n\n");
	 f->state=0;
	 return OK;
}	
	return SYSERR;
}
	
