#include <stdio.h>
int main(void){
	float bonus, salario;
	int ano;
	printf("Quanto voce recebe?(1.023): ");
	scanf("%f", &salario);
	printf("Quantos anos trabalha aqui?: ");
	scanf("%i", &ano);
	if(ano >= 5){
		bonus = salario * 0.20;
	} else{
		bonus = salario * 0.10;
	}
	printf("o valor do bonus recebido e: R$ %.2f\n", bonus);
	return 0;
}
