#include<future.h>

int future_cons(future *fut)
{	
	int i,status;
status=future_get(fut,&i);
if(status<1)
{
	printf("Future_get failed");
	return -1;
}
printf("It produced %d\n",i);
return OK;
}
 /*int status;  
status = future_get(fut, &n);
  if (status < 1) {
    printf("future_get failed\n");
    return -1;
  }
  printf("it produced %d\n",n);
  return OK;
}*/
	
