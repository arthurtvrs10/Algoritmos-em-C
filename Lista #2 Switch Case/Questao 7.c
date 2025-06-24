#include <stdio.h>
int main (void){
	int a, b, c;
	int aux;
	printf("Digite 3 numeros!Ex.: 2,3,5");
	printf("\nDigite: ");
	scanf("%i, %i, %i", &a, &b, &c);
	
	if(a > c){
		aux = a;
		a = c;
		c = aux;
	}
	if(a > b){
		aux = a;
		a = b;
		b = aux;
	}
	if(b > c){
		aux = b;
		b = c;
		c = aux;
	}
	
	printf("\nO valor 1:%i \nO valor 2:%i \nO valor 3:%i\n", a, b, c);
	return 0;
}

