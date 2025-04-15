#include <stdio.h>
int main(void){
	int sexo;
	float altura, m, f;
	
	printf("Digite seu sexo:");
	printf("\n1 - masculino");
	printf("\n2 - feminino");
	printf("\nDigite:");
	scanf("%i", &sexo);
	printf("\nQual sua altura(1.78):");
	scanf("%f", &altura);
	
	m = (72.7 * altura) - 58;
	f = 62.1* altura - 44.7;
	switch(sexo){
		case 1: 
			printf("Seu peso ideal e: %f", m);
		break;
		case 2:
			printf("Seu peso ideal e: %f", f);
		break;
	}
	return 0;
}
