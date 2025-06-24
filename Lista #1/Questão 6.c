#include <stdio.h>

void main(){
	float num1, divisor, resultado;

	
	printf("Digite o numero: ");
	scanf("%f", &num1);
	
	
	printf("digite o divisor: ");
	scanf("%f", &divisor);
	
	if (divisor == 0) {
		printf("Erro: Divisao por zero nao e possivel.\n");
	} else {
	
	resultado = num1 / divisor;
	printf("%f / %f = %.2f", num1, divisor, resultado);	
	
	}

	return 0;
}
