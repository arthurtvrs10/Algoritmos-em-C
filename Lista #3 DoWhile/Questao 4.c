#include <stdio.h>
int main(void){
	int num, i = 0, pares = 0, impar = 0, primos = 0;
	int j, cont=0;
	
	printf("Digite 10 numeros inteiros:\n");
	do{
		scanf("%i", &num);
		
			if( num % 2 ==0) {
				pares++;	
			} else {
				impar++;
			}
			
			if(num>1){
				cont=0;
				for(j=1;j<=num;j++){
					if(num%j==0){
						cont++;
					}
				}
				if(cont == 2){
					primos++;
				}
			}
		i++;
	} while(i < 10);
	
	printf("\n%i sao pares", pares++);
	printf("\n%i sao impares", impar++);
	printf("\n%i sao primos", primos++);
	
	return 0;
}
