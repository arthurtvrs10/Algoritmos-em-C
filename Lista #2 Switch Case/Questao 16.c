#include <stdio.h>
int main(void){
	int compra;
	float valor1, valor2;
	
	printf("Quantas macas voce vai comprar:");
	printf(" \n12 macas ou +: R$0.25");
	printf(" \n11 macas ou -: R$0.30");
	printf("\nQuantas:");
	scanf("%i", &compra);
	
	valor1 = compra * 0.25;
	if(compra >= 12){
		printf("Na compra de %i, o preco e: %.2f", compra, valor1);
	}
	valor2 = compra * 0.30;
	if(compra < 12){
		printf("Na compra de %i, o preco e: %.2f", compra, valor2);
	}
	return 0;
}
