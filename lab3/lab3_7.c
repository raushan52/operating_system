#include <stdio.h>
#include <unistd.h>

int main()
{

	int id,i;
	
	printf("Start of main.....\n");

	id = fork();
	if(id>0){
	
	printf("Parent section....\n");

	
	}else if(id == 0){

	printf("\nFork Created....\n");

	}else {

	printf("\nFork creation failed!!!\n");
	}

	printf("Printing the nubers from 1 to 10\n");

	for(i = 0; i<=10; i++){
	printf("%d ",i);
	//printf("\n");
	}
	printf("End of the main function....\n");

	return 0;

}
