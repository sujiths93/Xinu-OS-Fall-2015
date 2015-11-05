#include<xinu.h>
shellcmd xsh_len(int args,char *argv[])
{
	
	if(strncmp(argv[0],"len",3)==0)
{
	struct memblk *cur;
	
	cur=&memlist;
	while(cur->mnext!=NULL)
	{
		cur=cur->mnext;
		printf("Starting address is %d \n",cur);		
		printf("Length of the heap is %u \n",cur->mlength);
		
	 }
	

}
else
{
	printf("ERROR");
}
return 0;
}
