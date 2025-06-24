#include <stdio.h>
int main(void){
	float emprestimo,  salario, valor_parcelas;
	int parcelas;
	printf("\nValor do emprestimo: ");
	scanf("%f", &emprestimo);
	printf("\nnumero de parcelas?: ");
	scanf("%i", & parcelas);
	printf("\nSeu salario?: ");
	scanf("%f", &salario);
	
	valor_parcelas = emprestimo / parcelas;
	if( valor_parcelas <= salario*0.30){
		printf("Seu emprestimo foi Aprovado!");
	} else {
		printf("Seu emprestimo foi Negado!");
	}
	
	
	return 0;
}
