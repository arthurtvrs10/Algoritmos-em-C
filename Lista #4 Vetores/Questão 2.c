#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10];
	
	printf("=======================\n");
	printf(" ENTRADA DE 10 N�MEROS \n");
	printf("=======================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %i� n�mero:", i+1);
		scanf("%i", &vet[i]);
	}
	
	printf("=======================\n");
	printf("    N�MEROS DIGITADOS  \n");
	printf("=======================\n\n");
	
	for(i=11;i>0;i--){
		printf("\n%i� n�mero �: %i", i, vet[i]);
	}
	
	return 0;
}
