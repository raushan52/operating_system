#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{

	int pid = fork();
	if(pid > 0)
	printf("\nin parent process..\n");

	else if(pid == 0)
{

	sleep(30);
	printf("\nin child process...\n");

}

	return 0;

}
