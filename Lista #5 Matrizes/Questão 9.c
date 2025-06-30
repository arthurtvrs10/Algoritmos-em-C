#include <stdio.h>
#include <locale.h>

int main(void){
	
	int i,j,pares=0,impar=0,maior=-999,menor=999;
	int mat[5][5];	
	
	srand(time(NULL));
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			mat[i][j] = rand() % 51;
			
			if(mat[i][j]>maior){
				maior=mat[i][j];
			}
			if(mat[i][j]<menor){
				menor=mat[i][j];
			}
			if(mat[i][j] % 2 == 0){
				pares++;
			}
			if(mat[i][j] % 2 != 0){
				impar++;
			}
		}
	}
	
	for(i=0;i<5;i++){
		printf(" | ");
		for(j=0;j<5;j++){
			printf(" %i ", mat[i][j]);
		}
		printf(" |\n");
	}
	
	printf("\n\n**************************");
	printf("\n*|\tPares: %i\t|*", pares);
	printf("\n*|\tImpar: %i\t|*", impar);
	printf("\n*|\tMenor: %i\t|*", menor);
	printf("\n*|\tMaior: %i\t|*", maior);
	printf("\n**************************");

	return 0;
}
