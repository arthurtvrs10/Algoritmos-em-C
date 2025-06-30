#include <stdio.h>
#include <locale.h>

int main(void){
	int mat[3][3], i, j, soma;
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(NULL));
	
	system("CLS");
	
	printf("\a\n\n\t************\n");
	for(i=0;i<3;i++){
		printf("\t*|");
		for(j=0;j<3;j++){
			mat[i][j] = rand() % 201;
			printf(" %i ",mat[i][j]);
		}
		printf("|*\n");
	}
	printf("\t************\n");
	
	soma = mat[0][0] + mat[1][1] + mat[2][2];
	printf("\nA Diagonal principal é: %i | %i | %i", mat[0][0], mat[1][1], mat[2][2]);
	printf("\nA soma da diagonal principal é: [ %i ]", soma);
	
	return 0;
}
