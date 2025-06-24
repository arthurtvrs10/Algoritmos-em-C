#include <stdio.h>

int main(void){
	int num, mult;
	
	printf("Digite um numero inteiro qualquer: ");
	scanf("%i", &num);
	
	mult = num*2;
	if(mult > 30){
		printf("O valor e: %i", mult);
	}
	return 0;
}
