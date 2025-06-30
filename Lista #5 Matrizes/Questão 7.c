#include <stdio.h>
#include <locale.h>

int main(void){
	int i,j, mat[3][3], aux;
	int maior= -999, menor= 999;
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	printf("\aMATRIZES COM NÚMEROS ALEATÓRIOS.\n");
	for(i=0; i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j] = rand() % 201;
			if(i==0 && j==0){
				maior = menor = mat[i][j];
			}else{
				if(mat[i][j]>maior){
					maior = mat[i][j];
				}
				if(mat[i][j] < menor){
					menor=mat[i][j];
				}
			}
		}	
	}
	
	for(i=0; i<3;i++){
		printf(" | ");
		for(j=0;j<3;j++){
			printf(" %i ", mat[i][j]);
		}	
		printf(" |\n");
	}
	printf("\n********************************");
	printf("\n*| Menor Número: [ %i ]    |****", maior);
	printf("\n*| Maior Número: [ %i ]    |****", menor);
	printf("\n********************************");
	return 0;
}
