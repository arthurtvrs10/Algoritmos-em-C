#include <stdio.h>
#include <locale.h>
int main(void){
	int num, dig, maior = -999, menor;
	int  i=0, aux, lido = 0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Quantos n�meros vai digitar: ");
	scanf("%i", &dig);
	printf("Digite:\n");
	
	while(i < dig){
		scanf("%i", &num);
		if(num > maior){
			maior = num;
			lido = 1;
		}else if(num == maior){
			lido++;
		}
		i++;
	}	
	printf("\n%i � o maior n�mero.", maior);
	printf("\nO maior n�mero foi lido %i vezes", lido);
	return 0;
}
