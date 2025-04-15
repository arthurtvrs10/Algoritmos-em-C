//Elaborar um algoritmo que calcule a sua média nesta disciplina e imprima a média
//calculada e a mensagem: "Aprovado" ou "Exame" ou "Reprovado".
#include <stdio.h>
int main (void){
	float nota1, nota2, nota3, media;
	printf("\nDigite sua notas: Ex.: 5,3,6");
	printf("\nDigite: ");
	scanf("%f, %f, %f", &nota1, &nota2, &nota3);

	
	media = (nota1 + nota2 + nota3 ) / 3;
	if(media >= 6){
		printf("Aprovado!");
	} else if(media >= 4){
		printf("Exame!");
	}
	else{
		printf("Reprovado!");
	}
	return 0;
}
