#include <prodcons.h>
int i;
shellcmd xsh_stk(int argc ,char * argv[])
{
		if(strncmp(argv[0],"stk",3)==0)
{
	
	resume(create(rec,1024,24,"pocess1",0));
	sleep(1);
}
else
{
 printf("ERRO\n");
}	
	
	
return OK;

}


	
