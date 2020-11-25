#include <stdio.h>
#include <unistd.h>

int main(){
	int pid, pid1, pid2;
	
	pid = fork();
	
	pid2 = fork();
	
	if(pid == 0){
	
	printf("\n First child process. pid : %d and ppid : %d\n", getpid(), getppid());
	}
	else{
		pid1 = fork();
		if(pid1 == 0){
	printf("\n Second child process. pid : %d and ppid : %d\n", getpid(), getppid());
	}else{
	pid2 = fork();
	if(pid2 == 0){
	printf("\n Third child process. pid : %d and ppid : %d\n", getpid(), getppid());
	}
	else{
	printf("\n This is parent process. pid : %d\n", getpid());
	}
}
}

	return 0;
	

}
