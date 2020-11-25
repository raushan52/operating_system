#include <stdio.h>
#include <unistd.h>

int main()
{
	int id;
	printf("Hello, World\n");
		
	id = fork();
	if(id>0)
	{
		printf("This is parent section [Process id: %d].\n",getpid());




	}else if(id == 0){

	printf("Fork created [Process id: %d].\n", getpid());
	printf("Fork parent process id: %d.\n",getppid());
	}
	else{
		printf("Fork creation failed!!!\n");


	}

	return 0;



}
