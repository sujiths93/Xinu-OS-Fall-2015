#include <prodcons.h>

void producer(int count,sid32 consumed,sid32 produced)
{

	int i;
	for(i=1;i<=count;i++)
	{
	  
	  wait(produced);
	  n=i;	  
	  kprintf("Produced:%d \n",n);
	  signal(consumed);
	}

exit(0);
}