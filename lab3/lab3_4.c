#include <stdio.h>
#include <unistd.h>

void forkexample()
{
	if(fork() == 0){

	printf("Hello from Child!\n");

	}
	else{
		printf("Hello form Parent!\n");
	}


}
int main()
{

	forkexample();
	return 0;
}
