#include <stdio.h>
#include <locale.h>
int main(void){
	int i, num;
	int maior_num = -999;
	int menor_num = 99999999;
	
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite quantos n�meros quiser:::>");
	printf("Para parar digite um n�mero negativo:::>");
	
	printf("\n*********************\n");
	for(; ;i++){
		printf("Digite o %i::", i+1);
		scanf("%i", &num);
		
		if(num<0){
			break;
		}
		
		if(num > maior_num){
			maior_num=num;
		}
		
		if(num < menor_num){
			menor_num=num;
		}
	}
	printf("\n\n*********************\n");
	
	printf("\nO menor n�mero � %i", menor_num);
	printf("\nO maior n�mero � %i", maior_num);
	
	return 0;
}
