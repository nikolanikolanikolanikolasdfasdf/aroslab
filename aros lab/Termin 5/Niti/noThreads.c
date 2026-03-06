#include <stdio.h>

void myTurn(){

	while(1){
		printf("My turn!\n");
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

	myTurn();
	yourTurn();
}
