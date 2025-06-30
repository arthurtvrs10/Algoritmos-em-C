#include <stdio.h>
int main(void){
	int  i = 0;
	float nota1, nota2, nota3, media;
	float maiormed;
	
	do{
		printf("Aluno %i - Digite as 3 notas(1,2,3):\n", i+1);
		scanf("%f %f %f", &nota1, &nota2, &nota3);
		media= (nota1+nota2+nota3)/3;
		printf("A media foi: %.2f\n", media);
		
		if(media>maiormed){
			maiormed = media;
		}
		
		i++;
	}while(i<10);
		
		printf("\nA maior media foi: %.2f", maiormed);
	return 0;
}
