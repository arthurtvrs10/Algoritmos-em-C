#include <stdio.h>
int main (void){
	float especificacao, preco;
	int codigo;
	printf("\n100 - Cachorro quente");
	printf("\n101 - Bauru simples");
	printf("\n102 - Bauru com ovo");
	printf("\n103 - Hamburguer");
	printf("\n104 - Cheeseburguer");
	printf("\n105 - Refrigerante\n");
	
	printf("\nDigite o codigo do produto: ");
	scanf("%i", &codigo);
	
	switch(codigo) {
		case 100:
			preco = 1.20;	
		break;
		case 101:
			preco = 1.30;
		break;
		case 102:
			preco = 1.50;
		break;
		case 103:
			preco = 1.20;
		break;
		case 104:
			preco = 1.30;
		break;
		case 105:
			preco = 1.00;
		break;	
		default: 
			printf("Codigo invalido!");
		return 1;
							
	}
	
	printf("O valor e: R$ %.2f", preco);
	return 0;
}

