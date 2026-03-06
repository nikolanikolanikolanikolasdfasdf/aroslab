#include <stdio.h>
#include <pthread.h>

int vrednost;
void* saberi(void* arg);

int main(){

vrednost = 0;

pthread_t nit1, nit2;

pthread_create(&nit1, NULL, saberi, NULL);
pthread_create(&nit2, NULL, saberi, NULL);


pthread_join(nit1, NULL);
pthread_join(nit2, NULL);

printf("Vrednost: %d\n", vrednost);
return 0;
}

void* saberi (void* arg){
	int i = 0;

	for(i=0; i<100000; i++){
		vrednost++;
	}

}

