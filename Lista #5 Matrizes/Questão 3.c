#include <stdio.h>
#include <locale.h>

int main(void){
	int mat[3][3], i, j;
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite um número para a posiçao de mat[%i][%i] =>",i+1,j+1);
			scanf("%i", &mat[i][j]);
		}
	}
	
	system("CLS");
	
	printf("\a\n\n\t************\n");
	for(i=0;i<3;i++){
		printf("\t*|");
		for(j=0;j<3;j++){
			printf(" %i ",mat[i][j]);
		}
		printf("|*\n");
	}
	printf("\t************\n");
	
	return 0;
}
