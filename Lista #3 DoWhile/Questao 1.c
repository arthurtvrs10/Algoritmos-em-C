#include <stdio.h>
int main(void){

	int contador;
	contador = 0;
	
	do{
		printf("\n%i - ola!", contador);
		contador++;
	}while(contador <= 50);
	return 0;	
}

