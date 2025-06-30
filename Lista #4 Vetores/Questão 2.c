#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10];
	
	printf("=======================\n");
	printf(" ENTRADA DE 10 NÚMEROS \n");
	printf("=======================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%i", &vet[i]);
	}
	
	printf("=======================\n");
	printf("    NÚMEROS DIGITADOS  \n");
	printf("=======================\n\n");
	
	for(i=11;i>0;i--){
		printf("\n%iº número é: %i", i, vet[i]);
	}
	
	return 0;
}
