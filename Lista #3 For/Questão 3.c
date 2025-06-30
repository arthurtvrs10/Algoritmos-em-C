#include <stdio.h>
#include <locale.h>
int main(void){
	int i, cont=0, num, mult;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite 1 número entre 1 e 10: ");
	printf("\nDigite:");
	scanf("%i", &num);
	
	printf("\n********************************");
	for(cont=1; cont<=10; cont++){
		
		mult = num * cont;
		printf("\n%i x %i = %i", num, cont, mult);	
	}
	printf("\n********************************\n");
	return 0;
}
