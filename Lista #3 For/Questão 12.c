#include <stdio.h>
#include <locale.h>
int main(void){
	int i = 0;
	float nota1,nota2,nota3, media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite as 3 notas de 10 alunos:\n");
	
	printf("\n*********************\n");
	for(i=0;i<10;i++){
		printf("\n%i° - nota 1:::",i+1);
		scanf("%f", &nota1);
		
		printf("%i° - nota 2:::",i+1);
		scanf("%f", &nota2);
		
		printf("%i° - nota 3:::", i+1);
		scanf("%f", &nota3);
		
		media = (nota1+nota2+nota3) / 3;
		printf("\nA media das 3 notas é: %.2f\n", media);
		printf("\n\n*********************\n");
	}
	
	
	
	

	
	return 0;
}
