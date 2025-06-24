#include <stdio.h>

void main(){
	int num, plus, sucessor, antecessor;
	plus = 1;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	// sucessor
	sucessor = num + plus;
	printf("\nO sucessor e: %d", sucessor );
	
	//antecessor
	antecessor = num - plus;
	printf("\nO antecessor e: %d", antecessor);
	
	return 0;
}
