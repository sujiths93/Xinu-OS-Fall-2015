#include <future.h>



syscall future_get(future *f,int *value)
{
	
	
	if(f->state==FUTURE_EMPTY || f->state==FUTURE_WAITING)
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
	 f->state=FUTURE_EMPTY;
	 future_free(f);
	 return OK;
}	
	return SYSERR;
}
	
