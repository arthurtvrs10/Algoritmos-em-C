#include <stdio.h>

void main (){
	int c;
	int f;
	
	printf("Conversor de celsius para fahreinheit\n");
	printf("Celsius: ");
	scanf("%i", &c);
	
	f = ( 9 * c + 160 ) / 5;
	printf("\nO valor em fahreinheit e: %i\n", f);
	
	return 0;
}
