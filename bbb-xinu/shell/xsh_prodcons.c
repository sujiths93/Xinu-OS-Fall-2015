#include <future.h>
int n;


shellcmd xsh_prodcons(int nargs,char *args[])
{
future *f1, *f2,*f3;
f1=future_alloc(FUTURE_EXCLUSIVE);
f2=future_alloc(FUTURE_EXCLUSIVE);
f3=future_alloc(FUTURE_EXCLUSIVE);



	if (nargs==2)
	  {	

		if(strncmp(args[1],"-f",2)==0)
		{
		  resume(create(future_prod,1024,20,"fcons1",1,f1));
		  resume(create(future_cons,1024,20,"fprod1",1,f1));
		  resume(create(future_prod,1024,20,"fcons2",1,f2));
		  resume(create(future_cons,1024,20,"fprod2",1,f2));
		  resume(create(future_prod,1024,20,"fcons3",1,f3));
		  resume(create(future_cons,1024,20,"fprod3",1,f3));
		return 0;
		}
		
		if(strncmp(args[1],"--help",6)==0)
		{
 		printf("\n\nUse: %s flag [-f] \n\n", args[0]);
		printf("Description:\n");
		printf("\t Used to synchronize two processes\n");
		printf("\t--help\t display this help and exit\n");
		return 0;

		}
	}
		
			printf("Enter appropriate flag\n");
		return 0;
}
	  

 


