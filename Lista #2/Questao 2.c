#include <stdio.h>

int main(void){
	int dia;
	
	printf("Digitee um numero entre 1 a 7: ");
	scanf("%i", &dia);
	
	switch(dia){
		case 1:
			printf("O dia e Segunda-feira!");
		break;
	
		case 2:
			printf("O dia e Terca-feira!");
		break;
	
		case 3:
			printf("O dia e Quarta-feira!");
		break;
	
		case 4:
			printf("O dia e Quinta-feira!");
		break;
	
		case 5:
			printf("O dia e Sexta-feira!");
		break;
	
		case 6:
			printf("O dia e Sabado!");
		break;
	
		case 7:
			printf("O dia e Domingo!");
		break;

		default:
			printf("Digite um numero entre 1 e 12!");
		return 1;
	}
	return 0;
}
