#include <stdio.h>
#include <locale.h>
int main(void){
	int i, num, j, cont, primos= 0, par=0,impar=0;
	i=1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("digite 10 n�meros:");
	while(i<=10){
		scanf("%i", &num);
		if(num % 2 == 0
		){
			par++;
		}else{
			impar++;
		}
		
		cont = 0;
		for(j=1; j<=num; j++){
			if(num % j == 0){
				cont++;
			}
		}
		if(cont == 2){
			primos++;
		}
		i++;
		
	}
	printf("\n%i s�o pares", par);
	printf("\n%i s�o impares", impar);
	printf("\n%i s�o primos", primos);
	return 0;
}
