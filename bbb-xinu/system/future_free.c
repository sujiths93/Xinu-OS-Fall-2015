#include <future.h>



syscall future_free(future* f)
{
	
	
	if(freemem(f,sizeof(future)))
	{	
		return OK;
	}

	else 
		return SYSERR;
}	
	
