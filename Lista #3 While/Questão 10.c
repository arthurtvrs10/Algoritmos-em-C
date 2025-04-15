#include <stdio.h>
int main(void){
	int senha_informada, senha_correta, i = 0;
	
	printf("Digite sua senha (4 numeros inteiros): ");
	scanf("%i", &senha_correta);
	
	while(senha_informada != senha_correta){
		printf("\nConfirme a senha: ");
		scanf("%i", &senha_informada);
		if(senha_informada == senha_correta){
			printf("\nSenha correta!");
		}else{
			printf("Senha incorreta! Digite novamente");
		}
		i++;
	}
	return 0;
}
	
