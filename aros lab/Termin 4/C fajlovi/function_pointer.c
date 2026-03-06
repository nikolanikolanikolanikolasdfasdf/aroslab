#include <stdio.h>

void sabiranje(int a, int b){
    printf("Rezultat sabiranja: %d\n", a+b);
}

void oduzimanje(int a, int b){
    printf("Rezultat oduzimanja: %d\n", a-b);
}

void mnozenje(int a, int b){
    printf("Rezultat mnozenja: %d\n", a*b);
}

int main(){

	void (*nizFunkcija[])(int, int) = {sabiranje, oduzimanje, mnozenje};

	int opcija;

	int a=10, b=7;

	printf("Unesite 0 za sabiranje, 1 za oduzimanje, 2 za mnozenje:\n");
	scanf("%d", &opcija);

	(*nizFunkcija[opcija])(a,b);

	return 0;
}
