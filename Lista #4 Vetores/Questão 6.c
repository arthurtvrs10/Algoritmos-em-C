#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[5], num, cont;
	
	printf("========================\n");
	printf("    DIGITE O N�MERO     \n");
	printf("========================\n\n");
	
	for(i=0;i<5;i++){
		printf("Digite o %i� n�mero:", i+1);
		scanf("%i", &vet[i]);
	}
	
	printf("========================\n");
	printf("      VERIFICA��O       \n");
	printf("========================\n");
	
	printf("Digite o n�mero:");
	scanf("%i", &num);
		
	for(i=0;i<5;i++){
		if(num == vet[i]){
			cont++;
		}
	}
	if(cont != 0){
		printf("\n%i � um N�mero Existente...\n",num);
	}else{
		printf("\n%i � um N�mero Inexistente...\n",num);
	}
	
	return 0;
}
