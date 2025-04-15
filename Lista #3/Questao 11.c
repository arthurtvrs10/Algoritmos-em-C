#include <stdio.h>
int main(void){
	int i, soma_pares=0, soma_impar = 0;	
	
	printf("\nNumeros pares --->\n");
	do{
		if(i % 2 == 0){
			printf("+ %i ", i);
			soma_pares += i;
		}
		i++;	
	}while(i<=40);
	
	printf("\nSoma dos numeros pares: %i\n\n", soma_pares);
	
	i=1;
	
	printf("\nNumeros impares -->\n");
	do{
		if(i % 2 != 0){
			printf("+ %i ", i);
			soma_impar += i;
		}
		i++;	
	}while(i<=40);
	
	printf("\nSoma dos numeros impares: %i\n", soma_impar);
	return 0;
}
