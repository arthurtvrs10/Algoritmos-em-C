#include <stdio.h>
int main(void){
	int A, B, C, soma;
	
	printf("Digite 3 numeros inteiros qualquer: ");
	scanf("%i,%i,%i", &A, &B, &C);
	
	soma = A + B + C;
	
	if( soma >= 100){
		printf("\nO resultado e %i", soma);
	}
	return 0;
}
