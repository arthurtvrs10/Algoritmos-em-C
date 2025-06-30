#include <stdio.h>
int main(void){
	int num1, num2, soma = 0, mult = 1;
		printf("\nDigite 2 numero: ");
		scanf("%i", &num1);
		scanf("%i", &num2);
		
		do{
			if(num1 % 2 == 0){
				soma += num1;
			} else {
				mult *= num1;
			}
			num1++;
			
		}while(num1<=num2);
		
		printf("\nA soma dos numeros pares desse intervalo de numeros: %i", soma);
		printf("\nA multiplicacao dos numeros impares desse intervalo: %i", mult);
	return 0;
}
