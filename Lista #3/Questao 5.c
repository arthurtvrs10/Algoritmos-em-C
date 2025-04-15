#include <stdio.h>
int main (void){
	int num, digitos,i = 0, lido =0;
	int	maior = -999;
	printf("Quantos numeros vai digitar: ");
	scanf("%i", &digitos);
	printf("\nDigite os numeros:\n");
	
	do{
		scanf("%i", &num);
		if(num>maior){
			maior = num;
			lido = 1;
		}else if(num == maior){
			lido++;
		}
		i++;
	}while(i<digitos);

	printf("\nO maior numero e: %i", maior);
	printf("\nO maior numero foi lido %i vezes", lido);
	
	return 0;
}

