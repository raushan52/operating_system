#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
	//in parent process
	pid_t child_pid = fork();


	//parent process
	if(child_pid > 0){

		printf("\nThis is parent process..\n");
	sleep(50);
}	
	//child process
	else{
	
	printf("\nThis is child process...\n");
		exit(0);
}
	return 0;
}



