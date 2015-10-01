#include <prodcons.h>
#include <string.h>

int n;

sid32 produced,consumed;
shellcmd xsh_prodcons(int nargs,char *args[])
{
int count;
consumed=semcreate(0);
produced=semcreate(1);
	if(nargs==1)
	count=2000;
if((nargs==2)&&(strncmp(args[1],"--help",6)==0))
{
        printf("\n\nUse: %s [integer]\n\n", args[0]);
		printf("Description:\n");
		printf("\t Used to synchronize two processes\n");
		printf("Options:\n");
		printf("\tinteger\tzerp or one positive integer\n");
		printf("\t--help\t display this help and exit\n");
		return 0;
}
	else 
	  count=atoi(args[1]);

	if(nargs>2)
{
	printf("Too many arguments\n");
	return 0;
}
resume(create(producer,1024,20,"producer",3,count,consumed,produced));
resume(create(consumer,1024,20,"consumer",3,count,consumed,produced)); 
return 0;
}

