#include <stdio.h>
#include <math.h>
int main (void){
	float a, b, c, delta, x1, x2;
	
	printf("Digite os coeficientes da equacao do 2° grau.(a, b e c): \n");
	scanf("%i,%i,%i", &a, &b, &c);
	// verifica se e do 2° grau
	if(a == 0){
		printf("nao e uma equacao do 2° grau");
		return 0;
	}
	//cacular o delta
	
	delta = (b*b) - (4*a*c);
	
	if(delta > 0){
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("As raizes da equacao sao distintas: ");
		printf("x1 = %.2f e x2 = %.2f", x1, x2);
		
	} else if(delta == 0) {
		x1 = -b / (2 * a);
		printf("A equacao possui uma raiz real unica: x = %.2f\n", x1);
	
	} else {
		printf("A equacao nao possui raizes reais.\n");
	}
	return 0;
}
