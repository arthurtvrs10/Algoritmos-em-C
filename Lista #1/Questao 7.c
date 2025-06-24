#include <stdio.h>

void main(){
	float num1, num2, num3, media;
	
	printf("Digite um numero: ");
	scanf("%f", &num1);
	
	printf("Digite um numero: ");
	scanf("%f", &num2);
	
	printf("Digite um numero: ");
	scanf("%f", &num3);
	
	media = (num1 + num2 + num3) / 3;
	printf("A media e: %f", media);
	
	return 0;
}
