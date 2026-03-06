#include <stdio.h>
#include <pthread.h>

void* myTurn(void *arg){

	char* msg = (char*)arg;
	
	while(1){
		printf("%s\n", msg);
		sleep(1);
	}
}

void yourTurn(){

	while(1){
		printf("Your turn!\n");
		sleep(2);
	}
}

int main(){

	pthread_t thread;
	char* msg = "My turn!";
	
	pthread_create(&thread, NULL, myTurn ,(void*)msg);
	
	//myTurn();
	yourTurn();
}
