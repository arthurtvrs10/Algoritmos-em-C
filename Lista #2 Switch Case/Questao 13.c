#include <stdio.h>

int main(void){
	int num;
	
	printf("Digite um numero inteiro qualquer: ");
	scanf("%i", &num);
	
	if(!(num >= 3)){
		printf("O numero e %i", num);
	}
	return 0;
}
