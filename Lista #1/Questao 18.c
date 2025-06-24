#include <stdio.h>
void main(){
	int a;
	int b;
	float resultado_div;
	float resultado;
	
	printf("Digite um numero inteiro:");
	scanf("%i", &a);
	printf("Digite um numero inteiro:");
	scanf("%i", &b);
	
	resultado_div = a / b;
	resultado = resultado_div * resultado_div;
	
	printf("O resultado do quadrado da divisao e: %f", resultado);
	return 0;
}
