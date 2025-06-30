#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float vet[5], media, soma;
	
	printf("==========================\n");
	printf("     MÉDIA DE VETORES     \n");
	printf("==========================\n");
	
	for(i=0;i<5;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%f", &vet[i]);	
		soma= soma+vet[i];
	}
	
	printf("==========================\n");
	printf("    RESULTADOS OBTIDOS    \n");
	printf("==========================\n");
	
	media= soma/5;
	for(i=0;i<5;i++){
		printf("\n%i número é: %.2f", i+1, vet[i]);	
	}
	printf("\nA média dos vetores é: %.2f", media);
	
	return 0;
}
