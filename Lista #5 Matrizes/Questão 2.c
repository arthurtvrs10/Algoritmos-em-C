#include <stdio.h>
#include <locale.h>

int main(void){
	int mat[2][2], i, j;
	
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite um número para a posiçao de mat[%i][%i] =>",i,j);
			scanf("%i", &mat[i][j]);
		}
	}
	
	printf("\n\n\t**********\n");
	for(i=0;i<2;i++){
		printf("\t*|");
		for(j=0;j<2;j++){
			printf(" %i ",mat[i][j]);
		}
		printf("|*\n");
	}
	printf("\t**********\n");
	
	return 0;
}
