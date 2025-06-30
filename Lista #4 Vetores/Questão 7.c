#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[5], pares=0, impar=0;
	
	printf("===============================\n");
	printf("  VERIFICAR SE É IMPAR OU PAR  \n");
	printf("===============================\n\n");
	
	for(i=0;i<5;i++){
		printf("Digite o %i° número:", i+1);
		scanf("%i", &vet[i]);
		if(vet[i] % 2 == 0){
			pares++;
		}else{
			impar++;
		}
	}
	
	printf("===============================\n");
	printf("          RESULTADOS           \n");
	printf("===============================\n\n");
	
	printf("%i são números pares.\n", pares);
	printf("%i são números impares.\n\n", impar);
	
	printf("===============================\n");
	
	return 0;
}
