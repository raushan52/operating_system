#include <stdio.h>
#include <stdlib.h>

int main(){
	
	printf("\n----------------------------------------------------\n");
	printf("\nSno 	Id 	Pid 	PPid\n");
	int f1,f2,f3;
	f1 = fork();
	//f2 = fork();
	//f3 = fork();
	//int i = 32;
	
	if(f1 == 0){
	
	printf("\n%d 	%d 	%d 	%d\n",1,f1,getpid(),getppid());
	
	}
	
	else{

		f2 = fork();

		if(f2 == 0){
		printf("\n%d 	%d 	%d 	%d\n",2,f2,getpid(),getppid());
		}

	 		else{

				f3 = fork();

				if(f3 == 0){
		
				printf("\n%d 	%d 	%d 	%d\n",3,f3,getpid(),getppid());
				
				}

				else{

					printf("\n no fork present! : [pid] %d\n", getpid());
					}
	

				}

}
	
	return 0;

}
