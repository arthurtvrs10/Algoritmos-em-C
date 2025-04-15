#include <stdio.h>

void main(){
	float volume;
	float comprimento;
	float largura;
	float altura;
	
	printf("Para descobrir o volume de uma caixa retangular, me de as medidas:\n");
	printf("Qual o comprimento: ");
	scanf("%f", &comprimento);
	
	printf("\nQual a largura: ");
	scanf("%f", &largura);
	
	printf("\nQual a altura: ");
	scanf("%f", &altura);
	
	volume = comprimento * largura * altura;
	printf("O volume da caixa retangular e: %.2f", volume);
	
	return 0;
}
