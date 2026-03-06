#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(){

//pid - process id
	pid_t pid;
	int exitStatus;
	
	//POZIVAMO FORK
	switch(pid = fork()){
		case -1:
		printf("Fork error!\n");
		
		//Sistemski poziv fork() vraca vrednost 0 kada je u pitanju child proces		
		case 0:
		
		//funkcija getpid() vraca PID trenutnog procesa
		printf("Child: This is child process with PID %d\n", getpid());
		
		//funkcija getppid() vraca PID roditelja trenutnog procesa
		printf("Child: My parent's PID is %d\n", getppid());
		printf("Child: Bye!\n");
		sleep(10);
		exit(123);
		
		default:
		//Sistemski poziv fork() vraca vrednost vecu od 0 kada je u pitanju roditelj (parent) proces,
		//a to je upravo PID child procesa (promenljiva pid) koji je za 1 veci od PID-a roditelja!
		printf("Parent: This is parent process with PID %d\n", getpid());
		printf("Parent: My child's PID is %d\n", pid);
		printf("Parent: I'm waiting for my child...\n");
		wait(&exitStatus);
		printf("Parent: My child exited with exit status %d\n", WEXITSTATUS(exitStatus));
		printf("Parent: Bye!\n");
	}
	
	return 0;
}
