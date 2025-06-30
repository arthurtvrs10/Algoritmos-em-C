#include <stdio.h>
int main(void){
	int escolha;
	float num1, num2, m_km, km_m;
	printf("1 - m p/ km \n2 - km p/ m");
	printf(" \n3 - Para Finalizar o programa.\n");
	
	while(escolha != 3){
		printf("\nDigite o numero: ");
		scanf("%i", &escolha);
		switch(escolha){
			case 1: 
				printf("Qual o numero em metros:\n");
				scanf("%f", &num1);
				m_km = num1 / 1000;
				printf("O %.2fm em quilometros e: %.2fkm\n", num1, m_km);	
			
			case 2:
				printf("Qual o numero em quilometros:\n");
				scanf("%f", &num2);
				km_m = num2 * 1000;	
				printf("O %.2fkm em metros e: %.2fm\n",num2, km_m);
				
			case 3:
				printf("Finalizando o programa...\n");
				break;	
			
			default:
				printf("Opcao invalida!\n");	
		}	
	}
	return 0;
}	
