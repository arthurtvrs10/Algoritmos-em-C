#include <stdio.h>
#include <locale.h>
int main(void){
	int vet[10], i;
	
	setlocale(LC_ALL, "Portuguese");
	printf("===========================\n");
	printf("   ENTRADA DE 10 NÚMEROS   \n");
	printf("===========================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%i", &vet[i]);
	}
	
	printf("===========================\n");
	printf("     NÚMEROS DIGITADOS     \n");
	printf("===========================\n\n");
	
	for(i=0;i<10;i++){
		printf("%iº número: %i\n", i+1, vet[i]);
	}
	
	printf("===========================\n\n");
	
	
	return 0;
}
