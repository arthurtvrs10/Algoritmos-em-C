#include <stdio.h>
void main(){
	float tempo, velocidade, distancia, combustivel;
	
	printf("Qual foi o tempo: ");
	scanf("%f", &tempo);
	printf("Qual foi a velocidade media: ");
	scanf("%f", &velocidade);
	
	distancia= tempo * velocidade;
	combustivel= distancia/ 12;
	//velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros
	printf("\nA velocidade foi de: %.2f", velocidade);
	printf("\nO tempo foi de: %.2f", tempo);
	printf("\nA distancia foi de: %.2f", distancia);
	printf("\nA quantidade de litros usados foi de: %.2f\n", combustivel);
	return 0;
}
