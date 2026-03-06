#include <stdio.h>
#include <unistd.h>

int main(){

	fork();
	sleep(5);
	fork();
	sleep(5);
	printf("PID = %d, PPID = %d\n", getpid(), getppid());
	
return 0;

}
