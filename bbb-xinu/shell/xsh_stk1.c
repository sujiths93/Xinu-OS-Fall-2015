#include <prodcons.h>
int i;
shellcmd xsh_stk1(int argc ,char * argv[])
{
		
	if(strncmp(argv[0],"stk1",4)==0)
{
	resume(create(rec1,1024,24,"pocess1",0));
}	
	else
{
	printf("ERROR");
}
	
	
return OK;

}


	
