#include <prodcons.h>
void producer(int count)
{
	int i;
	for(i=0;i<count;i++)
	{
	  n=i;
	  kprintf("Produced:%d",n);
	}
return 0;
}
