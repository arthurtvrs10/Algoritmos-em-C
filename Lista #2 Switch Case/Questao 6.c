#include <stdio.h>
int main (void){
	int a, b, c;
	printf("Digite 3 numeros!Ex.: 2,3,5");
	printf("\nDigite: ");
	scanf("%i, %i, %i", &a, &b, &c);
	
	if( a >= b && a >= c){
		printf("O maior numero e: %i", a);
	}else if(b >= a && b >= c){
		printf("O maior numero e: %i", b);
	} else {
		printf("O maior numero e: %i", c);
	}
	return 0;
}

