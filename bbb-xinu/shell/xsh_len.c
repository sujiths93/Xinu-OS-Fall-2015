#include<xinu.h>
shellcmd xsh_len(int args,char *argv[])
{
	if(argc==2)
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
		if(strncmp(argv[1],"--help",6)==0)
		{
		printf("Description:\n");
		printf("\t This will return the list of freely available address blocks and their respective length in bytes\n");
		printf("\t--help\t display this help and exit\n");
		return OK;

		}
	}

	printf("ERROR");

return 0;
}
