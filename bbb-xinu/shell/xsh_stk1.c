#include <prodcons.h>
int i;
shellcmd xsh_stk1(int argc ,char * argv[])
{
	if(argc==2)
	{	
		if(strncmp(argv[0],"stk1",4)==0)
		{
			resume(create(rec1,1024,24,"pocess1",0));
			sleep(1);			
			return OK;
		}	
		if(strncmp(argv[1],"--help",6)==0)
		{
 		printf("\n\nUse: %s stk1 \n\n", argv[0]);
		printf("Description:\n");
		printf("\t This function will allocate the stack frame based on First Fit allocation technique\n");
		printf("\t--help\t display this help and exit\n");
		return OK;

		}
	}
	printf("ERROR");

	
	
return OK;

}


	
