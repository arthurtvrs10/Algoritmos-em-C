#include <stdio.h>
void main(){
	float v, d, t;
	
	printf("\nQual a distancia em quilometros: ");
	scanf("%f", &d);
	
	printf("\nQual foi o tempo em minutos: ");
	scanf("%f", &t);
	
	v = (d * 1000) / (t * 60);
	printf("A velocidade do projetil e %.2f", v);
	
	return 0;
}
