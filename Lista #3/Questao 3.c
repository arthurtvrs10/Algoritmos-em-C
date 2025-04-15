#include <stdio.h>
int main(void){
	int num;
	int soma;
	int valor;
	
	printf("escreva 1 numero inteiro de 1 a 10: ");
	scanf("%i", &num);
	
	do{
		if(num>0 && num<10){
		valor = num * soma;
		printf("\n%i * %i = %i", num, soma, valor);
		}
		soma++;
	}while(soma<=10);	
	return 0;
}
