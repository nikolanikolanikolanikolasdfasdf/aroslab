#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(){
	
	for(int i = 0; i<7; i++){
		execl("/bin/echo", "echo", "hello", NULL);
	}
	
	return 0;
}
