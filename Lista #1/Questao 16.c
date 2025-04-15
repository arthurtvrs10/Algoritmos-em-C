#include <stdio.h>
#include <math.h>

void main() {
	double base, indice, resultado;
	printf("calcular raiz --->");
	printf("\nQual a base: ");
	scanf("%lf", &base);
	printf("\nQual o indice: ");
	scanf("%lf", &indice);
	
	if( indice == 0){
		printf("Erro! O indice nao pode ser 0" );
		return 0;
	}
	
	resultado = pow(base, 1.0 / indice);
	printf("\nA raiz de indice %.2lf de %.2lf e %.2lf", indice,base,resultado);
	
	return 0;
}
