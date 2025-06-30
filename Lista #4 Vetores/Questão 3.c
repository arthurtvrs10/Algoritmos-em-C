#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i, vet[10];
	
	printf("==========================\n");
	printf(" LEITOR DE NÚMEROS PARES  \n");
	printf("==========================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%i", &vet[i]);
		if(vet[i] % 2 != 0){
			printf("Digite somente números pares!\n");
		}
	}
	
	printf("==========================\n");
	printf("     NÚMEROS DIGITADOS    \n");
	printf("==========================\n\n");
	
	for(i=0;i<10;i++){
		printf("\n%iº número é: %i", i+1, vet[i]);
	}

	return 0;
}
