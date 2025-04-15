#include <stdio.h>
#include <locale.h>
int main(void){
	int num1, num2, soma=0, mult;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o 1° número:");
	scanf("%i", &num1);
	printf("Digite o 2° número:");
	scanf("%i", &num2);
	
	//para organizar em ordem crescente
	if(num1 > num2){
		int aux = num1;
		num1 = num2;
		num2 = aux;
	}
	
	while(num1<=num2){
		if(num1 %2 == 0){
			soma = soma + num1;
		} else {
			mult = mult * num1;
		}
		num1++;
	}
	
	printf("\nA soma dos numeros pares desse intervalo de numeros: %i", soma);
	printf("\nA multiplicacao dos numeros impares desse intervalo: %i", mult);
    return 0;
}
