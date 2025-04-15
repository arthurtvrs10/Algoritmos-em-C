#include <stdio.h>
#include <math.h>

void main(){
	int base, expoente, resultado;
	
	printf("Qual a base: ");
	scanf("%i", &base);
	printf("Qual o expoente: ");
	scanf("%i", &expoente);
	
	resultado = pow(base, expoente);
	printf("O resultado de %i elevado a %i e: %i\n", base, expoente, resultado);
	
	return 0;
}
