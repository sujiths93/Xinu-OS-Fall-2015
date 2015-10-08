#include <future.h>



future* future_alloc(int future_flag)
{
	future* f;
	
	if(future_flag!=1)
	{
		printf("Cannot allocate future flag"); 	
		return;
	}
 
	 f=(future*) getmem(sizeof(future));
		f->flag=future_flag;
		f->state=FUTURE_EMPTY;
	return f;
}
	
	
	
