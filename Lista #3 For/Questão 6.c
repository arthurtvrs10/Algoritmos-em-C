#include <stdio.h>
#include <locale.h>
int main(void){
	int num1, num2, i, aux, soma=0, mult=1;
	
	
	setlocale(LC_ALL, "Portuguese");

	printf("Soma de Intervalo de n�meros:::>");
	printf("\nDigite o primeiro::");
	scanf("%i", &num1);
	printf("Digite o segundo::");
	scanf("%i", &num2);
	
	if(num1>num2){
		aux = num1;
		num1 = num2;
		num2= aux;
	}
	printf("\nde %i at� %i\n", num1, num2);
	printf("\n*********************\n");
	for(i=num1;i<=num2;i++){
		printf("\nOs n�meros s�o %i\n", i);
		
		if(num1 % 2 == 0){
			soma = soma + num1;
		}else{
			mult = mult * num1;
		}
		num1++;
	}

	printf("\n\n*********************\n");

	printf("\nA soma dos n�meros pares desse intervalo de numeros � %i", soma);
	printf("\nA multiplicacao dos n�meros impares desse intervalo � %i", mult);
	
	return 0;
}
