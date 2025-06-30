#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");

	int i, aux, vet[5], soma, media, menor_num=999, maior_num=-999;
	
	printf("=========================\n");
	printf("    DIGITE OS NÚMEROS    \n");
	printf("=========================\n\n");
	
	for(i=0;i<5;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%i", &vet[i]);
		soma+=vet[i];
		
		if(vet[i] > maior_num){
			maior_num = vet[i];
		}
		if(vet[i]<menor_num){
			menor_num=vet[i];
		}
	}
	media = soma/5;
	printf("=========================\n");
	printf("        RESULTADOS       \n");
	printf("=========================\n\n");
	
	printf("O menor número é: %i\n", menor_num);
	printf("O maior número é: %i\n", maior_num);
	printf("A média é: %i", media);
	return 0;
}
