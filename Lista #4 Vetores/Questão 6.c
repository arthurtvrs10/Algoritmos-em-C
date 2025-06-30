#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[5], num, cont;
	
	printf("========================\n");
	printf("    DIGITE O NÚMERO     \n");
	printf("========================\n\n");
	
	for(i=0;i<5;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%i", &vet[i]);
	}
	
	printf("========================\n");
	printf("      VERIFICAÇÃO       \n");
	printf("========================\n");
	
	printf("Digite o número:");
	scanf("%i", &num);
		
	for(i=0;i<5;i++){
		if(num == vet[i]){
			cont++;
		}
	}
	if(cont != 0){
		printf("\n%i é um Número Existente...\n",num);
	}else{
		printf("\n%i é um Número Inexistente...\n",num);
	}
	
	return 0;
}
