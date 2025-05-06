#include <stdio.h>
#include <locale.h>
int main(void){
	int i, senha, senha_confirma;
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite sua senha:::>");
	scanf("%i", &senha);
	
	
	printf("\n*********************\n");
	for(; ;i++){
		printf("Confirme sua senha:::");
		scanf("%i", &senha_confirma);
		if(senha == senha_confirma ){
			printf("Senha Correta!!!\n");
			break;
		}else{
			printf("Senha Incorreta!!!!\n");
			
			printf("\nDigite a confirmação de senha novamente:\n");
		}
	}
	printf("\n\n*********************\n");
	
	
	return 0;
}
