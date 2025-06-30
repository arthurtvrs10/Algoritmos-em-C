#include <stdio.h>
int main(void){
	int contador;
		do{
			
			if(contador % 2 == 0){
				printf("\n%i - oi!", contador);	
			}
			contador++;
			
		}while(contador <= 100);
	return 0;
}
