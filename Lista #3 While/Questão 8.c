#include <stdio.h>
int main(void){
	int idades, i = 0, soma_idades, maior_idade = -1, menor_idade = 109;
	
	printf("Digite a idade dos individuos:\n");
	while(1){
		scanf("%i", &idades);
		if(idades == 0){
			break;
		}
		
		soma_idades += idades;
		i++;
		
		if(idades > maior_idade){
			maior_idade = idades;
		}
		
		if(idades < menor_idade){
			menor_idade = idades;
		}
	}
	if(i>0){
			int media = soma_idades/i;
			printf("\nA media das idades e: %i", media);
			printf("\nA maior idade e: %i", maior_idade);
			printf("\nA menor idade e: %i", menor_idade);	
		} else{
			printf("\nNenhuma idade valida");
		}	

	return 0;
}

