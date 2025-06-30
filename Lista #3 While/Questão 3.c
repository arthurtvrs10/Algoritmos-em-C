#include <stdio.h>
int main(void){
	int i = 0,num, soma;
	
	printf("escreva um valor de 1 a 10:\n");
	scanf("%i", &num);
	
	while(i<=10){
		soma = num * i;
		if(num>0 && num<11){
			printf("\n%i x %i = %i\n", num, i, soma);
		}else{
			printf("Somente de 1 a 10!");
			break;
		}
		i++;
	}	
	return 0;
}

