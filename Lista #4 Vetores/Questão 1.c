#include <stdio.h>
#include <locale.h>
int main(void){
	int vet[10], i;
	
	setlocale(LC_ALL, "Portuguese");
	printf("===========================\n");
	printf("   ENTRADA DE 10 N�MEROS   \n");
	printf("===========================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %i� n�mero:", i+1);
		scanf("%i", &vet[i]);
	}
	
	printf("===========================\n");
	printf("     N�MEROS DIGITADOS     \n");
	printf("===========================\n\n");
	
	for(i=0;i<10;i++){
		printf("%i� n�mero: %i\n", i+1, vet[i]);
	}
	
	printf("===========================\n\n");
	
	
	return 0;
}
