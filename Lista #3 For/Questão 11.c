#include <stdio.h>
#include <locale.h>
int main(void){
	int i, soma_pares=0, soma_impar=0;
	
	setlocale(LC_ALL, "Portuguese");

	printf("\n*********************\n");
	for(i=1;i<=40;i++){
		if(i % 2 == 0){
			soma_pares += i;
			printf("+%i", i);		
		}
	}
	printf("\nA soma dos números pares é:%i", soma_pares);
	printf("\n\n*********************\n");
	
	
	
	printf("\n\n*********************\n");
	for(i=1;i<=40;i++){
		if(i%2!=0){
			soma_impar += i;
			printf("+%i", i);
		}
	}
	printf("\nA soma dos números impares é:%i", soma_impar);
	printf("\n\n*********************\n");
	
	
	return 0;
}
