//Elaborar um programa que leia uma medida em pés e apresente o seu valor convertido em 
//metros, lembrando que um pé mede 0,3048 metros, ou seja, um pé é igual a 30,48 
//centímetros.

#include <stdio.h>
void main(){
	float pes_para_metro = 0.3048;
	float metros, pes;
	
	printf("Coverter pes em metros: ");
	printf("Valor em pes: ");
	scanf("%f", &pes);
	
	metros = pes * pes_para_metro;
	printf("%.2f pes e igual a %.3f metross.\n", pes, metros);	
	return 0;
}
