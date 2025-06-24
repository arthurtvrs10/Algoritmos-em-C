
#include <stdio.h>
int main(void){
	
	int num1, num2, soma;
	
	printf("Digite seu primeiro numero: ex.: x,y ");
	scanf("%i, %i", &num1, &num2);

	soma = num1 + num2;
	printf("%i + %i = %i", num1, num2, soma);
	return 0;
}
