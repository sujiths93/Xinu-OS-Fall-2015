#include <prodcons.h>
int i;
shellcmd xsh_stk(int argc ,char * argv[])
{
if (argc==2)
	  {
		if(strncmp(argv[0],"stk",3)==0)
		{
	
		resume(create(rec,1024,24,"pocess1",0));
		sleep(1);
		return OK;
		}
		if(strncmp(argv[1],"--help",6)==0)
		{
 		printf("\n\nUse: %s -f \n\n", argv[0]);
		printf("Description:\n");
		printf("\t This function will allocate the stack frame based on First Fit allocation technique\n\n");
		printf("\t--help\t display this help and exit\n");
		return OK;

		}
}

 printf("ERROR\n");
	
	
	
return OK;

}


	
