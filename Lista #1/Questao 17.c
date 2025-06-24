#include <stdio.h>
void main(){
	int numero;
	
	printf("Digite um numero inteiro:");
	scanf("%i", &numero);
	
	int resto_por_2 = numero % 2;//after put the numbers in cloud
	int resto_por_3 = numero % 3;
	
	printf("\nO resto da divisao por 2 do numero %i e: %i", numero, resto_por_2);
	printf("\nO resto da divisao por 3 do numero %i e: %i\n", numero, resto_por_3);
	
	return 0;
}
