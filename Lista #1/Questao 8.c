#include <stdio.h>

void main(){
	float preco, novoPreco;
	int opcao;
	
	//solicita o preco do produto
	printf("Qual o valor do produto? ");
	scanf("%f", &preco);// se nao guardar o valor n fununcia
	
	//solicitar a forma de pagamento
	printf("Escolha a forma de pagamento:\n");
	printf("\n1 - Pagamento a vista (10%% de desconto)\n");
	printf("2 - Pagamento no cartao de credito (5%% de desconto)\n");
	printf("\nDigite a opcao:");
	scanf("%i", &opcao);
	
	//Calcula o novo preço com base na opção escolhida
	
	switch (opcao){
		case 1:
			novoPreco = preco * 0.90; //10%
			printf("Pagamento a vista selecionado.\n");
			printf("Novo preco com 10%% de desconto: R$ %.2f\n", novoPreco);
			break;
		
		case 2:
			novoPreco = preco * 0.95; // 5%
			printf("Pagamento no cartao de credito selecionado.\n");
			printf("Novo preco com 5%% de desconto: %.2f\n", novoPreco);
			break;
		
		default:
			printf("Opcao invalida! Nenhum desconto aplicado.\n");
			printf("Preco original: %.2f\n", preco);
			break;	
	}
	
	return 0;
}
