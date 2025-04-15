#include <stdio.h>
int main (void){
	float valorProduto, valorFrete, valorTotal;
	int opcao;
	
	printf("Escolhas o pais de origem do produto:");
	printf("\n1 - Eua");
    printf("\n2 - Franca");
    printf("\n3 - Mexico");
    printf("\n4 - Argentina");
    printf("\n5 - China");
    printf("\nDigite o numero do país (1-5): ");
    scanf("%i", &opcao);
    
    printf("\nDigite o valor do produto : ");
    scanf("%f", &valorProduto);
	 
    switch(opcao){//puxar  a opcao
    	case 1:
    		valorFrete = 60.0;
			break;
		case 2:
    		valorFrete = 75.50;
			break;
		case 3:
    		valorFrete = 50.0;
			break;
		case 4:
    		valorFrete = 27.35;
			break;
		case 5:
    		valorFrete = 80.0;
			break;
		default: 
			printf("Digite um valor de 1 a 5!");
		return 1;	
	}
	
	valorTotal = valorProduto + valorFrete;
  	printf("\nO valor do produto: R$ %.2f", valorProduto);	
  	printf("\nO valor do frete: R$ %.2f", valorFrete);	
  	printf("\nO valor final: R$ %.2f", valorTotal);	
    return 0;
}
