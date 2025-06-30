#include <stdio.h>
#include <locale.h>
int main(void){
	int i, tipo;
	float num1, tipo1, num2, tipo2;
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite o tipo de conversão:::>");
	printf("\n1- km/h para m/s");
	printf("\n2- m/s para km/h");
	printf("\n3- para finalizar o programa!");
	printf("Conversor de km/h para m/s e vice-versa");
	
	
	printf("\n*********************\n");
	for(; ;i++){
		printf("\nDigite o tipo de conversão::");
		scanf("%i", &tipo);
		
		switch(tipo){
			case 1:
				printf("Digite o número em quilômetros:");
				scanf("%f", &num1);
				tipo1 = num1 * 1000;
				printf("*****\n numero em metros é %.2f\n*****\n", tipo1);
				break;
			case 2:
				printf("Digite o número em metros:");
				scanf("%f", &num2);
				tipo2 = num2 / 1000;
				printf("*****\n numero em metros é %.2f\n*****", tipo2);	
				break;
			case 3:
				printf("\nFinalizando o programa...\n");
				return 0;
			default:
				printf("\n*****\nNúmero inválido\n*****\n");
				break;
		}
	}
	printf("\n\n*********************\n");
	
	
	return 0;
}
