#include <future.h>
int future_prod(future *fut) {
  int i,j;
  j=(int)fut;
  for(i=0;i<1000;i++)
  {
	j=j+i;
  }
	
  future_set(fut,&j);
	return OK;
}
  /* n=1;
  future_set(fut, &n);
  return OK;
}
*/
