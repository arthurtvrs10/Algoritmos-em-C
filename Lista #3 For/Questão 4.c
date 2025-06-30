#include <stdio.h>
#include <locale.h>
int main(void){
	int num, j;
	int cont;
	int par = 0;
	int impar = 0;
	int ehprimo = 0;
	int primo = 0;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite 10 n�meros:\n");
	printf("\n*********************\n");
	
	for(cont=0;cont<10; cont++){
		printf("\nDigite o %i� n�mero:", cont+1);
		scanf("%i",&num);
		
		if(num % 2 == 0){
			par++;
		}else{
			impar++;	
		}
		
		if(num>1){
			ehprimo = 1;
			for(j=2; j<num; j++){
				if(num%j == 0){
					ehprimo = 0;
					break;
				}
			}
			if(ehprimo){
				primo++;
			}	
		}
	}
	printf("\n\n*********************\n");
	
	printf("%i s�o n�meros pares.\n", par);
	printf("%i s�o n�meros impar.\n", impar);
	printf("%i s�o n�meros primo.\n", primo);
	
	return 0;
}
