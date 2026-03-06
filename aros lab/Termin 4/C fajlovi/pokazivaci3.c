#include <stdio.h>

int main(void){

	char s1[] = "abcde";
	char s2[] = "fgh";

	char *niz[2];

	niz[0]=s1;
	niz[1] = s2;
	
	printf("s1: %s\n", s1);
	printf("s1: %c\n", *s1);
	
	int i;
	
	for(i=0; i<2; i++){
		printf("%s", niz[i]);
	}	
	
	return 0;
}
