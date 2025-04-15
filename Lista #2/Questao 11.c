#include <stdio.h>

int main(void){
	int a, b, c, aux;
	
	printf("Digite 3 numeros inteiros: Ex.: 2,8,4");
	printf("\nDigite: ");
	scanf("%i,%i,%i", &a, &b, &c);
	
	if( a > b){
		aux = a;
		a = b;
		b = aux;	
	}
	if( a > c){
		aux = a;
		a = c;
		c = aux;
	} 
	if(b > c){
		aux = b;
		b = c;
		c = aux;
	}
	printf("\nO valor 1: %i \nO valor 2: %i \nO valor  3: %i", a,b,c);
	return 0;
}
