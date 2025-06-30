#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i, j, vet[10], aux;
	
	printf("=======================\n");
	printf("   DIGITE OS NÚMEROS   \n");
	printf("=======================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%i", &vet[i]);	
	}
	
	for(i=0;i<10;i++){//acessar os vetores
		for(j=i+1; j<10; j++){//outro lopp pra verificar qual é maior
			if(vet[i] > vet[j]){//verica se o i e maior que o i+1, ex.:2 > 2+1
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	
	printf("=======================\n");
	printf("   VALORES ORDENADOS   \n");
	printf("=======================\n\n");
	
	for(i=0;i<10;i++){
		printf("\n%i° número é: [ %i ].", i+1, vet[i]);
	}
	
	return 0;
}
