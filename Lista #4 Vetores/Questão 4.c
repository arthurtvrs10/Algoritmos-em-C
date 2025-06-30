#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, vet[10];
	
	printf("=============================\n");
	printf("   NÚMERO 0-IMPAR OU 1-PAR   \n");
	printf("=============================\n\n");
	
	for(i=0;i<10;i++){
		printf("Digite o %iº número:", i+1);
		scanf("%i", &vet[i]);
		if(vet[i] % 2 == 0){
			vet[i]=1;
		}else{
			vet[i]=0;
		}
	}
	
	printf("=============================\n");
	printf("   0 - IMPAR || 1 - PAR     \n");
	printf("=============================\n\n");
	
	for(i=0;i<10;i++){
		printf("%iº número é: %i\n", i+1, vet[i]);
	}
	
	return 0;
}
