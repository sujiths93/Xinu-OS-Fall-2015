#include<future.h>

int future_cons(future *fut)
{	
	
 int status;  
status = future_get(fut, &n);
  if (status < 1) {
    printf("future_get failed\n");
    return -1;
  }
  printf("it produced %d\n",n);
  return OK;
}
	
