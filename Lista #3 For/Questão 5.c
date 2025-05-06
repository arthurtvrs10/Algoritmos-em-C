#include <stdio.h>
#include <locale.h>
int main(void){
	int dig, i, num, aux, maior_num=-999, lido = 0;
	
	
	setlocale(LC_ALL, "Portuguese");

	printf("Quantos números vai digitar:\n");
	printf("Digite:");
	scanf("%i", &dig);
	
	printf("\n*********************\n");
	for(i=0;i<dig;i++){
		printf("\nDigite o %i° número:", i+1);
		scanf("%i", &num);
			
		if(num>maior_num){
			maior_num =num;
			lido = 1;
		}else if(num == maior_num){
			lido++;
		}
	}

	printf("\n\n*********************\n");
	printf("O maior num é %i\n", maior_num);
	printf("O maior num foi lido %i", lido);
	
	
	return 0;
}
