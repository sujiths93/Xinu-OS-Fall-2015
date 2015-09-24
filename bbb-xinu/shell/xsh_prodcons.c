#include <prodcons.h>

int n;

shellcmd xsh_prodcons(int nargs,char *args[])
{
	int count;
	if(nargs==1)
	count=2000;
   else if(nargs==2)
	  count=atoi(args[1]);


/*printing error message if number of arguments is <1 and >2 */
   else 
	printf("Too many arguments\n");
	//printf("%d",count);
resume(create(producer,1024,20,"producer",1,count));
resume(create(consumer,1024,20,"consumer",1,count));
return 0;
}

