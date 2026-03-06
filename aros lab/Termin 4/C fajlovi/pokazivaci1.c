#include <stdio.h>

int main(int argc, char *argv[]){

	int *p;
	*p=5;

	printf("P = %p\n",p);
	printf("*P = %d\n",*p);
	printf("&P = %p\n",&p);

}
