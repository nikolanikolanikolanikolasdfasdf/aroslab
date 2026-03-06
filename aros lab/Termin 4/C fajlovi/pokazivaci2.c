#include <stdio.h>

int main(int argc, char *argv[]){

	int num = 5;
	int *p;
	p = &num;

	printf("p=%p\n", p);
	printf("*p=%d\n", *p);
	printf("&p=%p\n", &p);


	int *q;
	q=p;
	*q=7;
	
	printf("num=%d\n", num);
	printf("*p=%d\n", *p);
	printf("*q=%d\n", *q);
	printf("q:%p, p:%p\n", q,p);
	
	return 0;
}
