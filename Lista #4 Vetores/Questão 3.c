#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[10];
	
	printf("==========================\n");
	printf(" LEITOR DE N�MEROS PARES  \n");
	printf("==========================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %i� n�mero:", i+1);
		scanf("%i", &vet[i]);
		if(vet[i] % 2 != 0){
			printf("Digite somente n�meros pares!\n");
		}
	}
	
	printf("==========================\n");
	printf("     N�MEROS DIGITADOS    \n");
	printf("==========================\n\n");
	
	for(i=0;i<10;i++){
		printf("\n%i� n�mero �: %i", i+1, vet[i]);
	}

	return 0;
}
