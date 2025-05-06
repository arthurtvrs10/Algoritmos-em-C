#include <stdio.h>
#include <locale.h>
int main(void){
	int i, idade, soma_idades, media_idades;
	int maior_idade = -999;
	int menor_idade = 99999999;
	
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite quantos idades:::>");
	printf("Para parar digite 0:::>");
	
	printf("\n*********************\n");
	for(; ;i++){
		printf("%i° Idade::", i+1);
		scanf("%i", &idade);
		
		soma_idades=soma_idades + idade;
		
		if(idade == 0){
			break;
		}
		if(idade > maior_idade){
			maior_idade = idade;
		}
		if(idade < menor_idade){
			menor_idade = idade;
		}
	}
	printf("\n\n*********************\n");
	media_idades = soma_idades/i;
	printf("\nO maior idade é %i", maior_idade);
	printf("\nO menor idade é %i", menor_idade);
	printf("\nA média das idades é %i", media_idades);
	
	return 0;
}
