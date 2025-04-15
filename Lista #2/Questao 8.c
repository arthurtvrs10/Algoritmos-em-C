//Triângulo equilátero: Todos os três lados têm a mesma medida 
//Triângulo isósceles: Dois lados têm a mesma medida, chamados de congruentes, e um diferente 
// escaleno: Todos os três lados têm medidas diferentes 
#include <stdio.h>
int main (void){
	int L1, L2, L3;
	printf("\nDigite o tamanho dos lados do triangulo!");
	printf("\nEx.: 2, 3, 5");
	printf("\nDigite: ");
	scanf("%i,%i,%i", &L1, &L2, &L3);
	
	if((L1 + L2 > L3) && (L1+ L3 > L2) && (L3 + L2 >L1)){
		if( L1 == L2 && L2 == L3){
			printf("Esse triangulo e: equilatero.");
		}
		
		else if( L1 != L2 && L1 != L3 && L2 != L3){
			printf("Esse triangulo e: escaleno");
		}
		
		else{
			printf("Esse triangulo e: isosceles");
		}
	}else{
		printf("Nao e possivel formar um triangulo com esses valores");
	}	
	return 0;
}

