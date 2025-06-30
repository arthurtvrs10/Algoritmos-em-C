#include <stdio.h>
#include <locale.h>

int main(void){
	int mat[4][4], i, j;
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite um número para a posiçao de mat[%i][%i] =>",i+1,j+1);
			scanf("%i", &mat[i][j]);
		}
	}
	
	system("CLS");
	
	printf("\a\n\n\t************\n");
	for(i=0;i<4;i++){
		printf("\t*|");
		for(j=0;j<4;j++){
			printf(" %i ",mat[i][j]);
		}
		printf("|*\n");
	}
	printf("\t************\n");
	
	
	printf("\n*********************\n");
	printf("Os números impares são:\n");
	printf("***********************\n\n");
	for(i=0;i<4;i++){
		printf(" | ");
		for(j=0;j<4;j++){
			if(mat[i][j] % 2 != 0){
				printf(" %i ", mat[i][j]);
			}
		}
		printf(" | \n");
	}
	
	return 0;
}
