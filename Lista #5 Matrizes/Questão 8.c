#include <stdio.h>
#include <locale.h>

int main(void){
	
	int i,j,num, tem;
	int mat[3][3];

	srand(time(NULL));
	setlocale(LC_ALL,"Portuguese");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j] = rand() % 1001;
		}
	}
	
	for(i=0;i<3;i++){
		printf(" | ");
		for(j=0;j<3;j++){
			printf(" %i ", mat[i][j]);
		}
		printf(" |\n");
	}
	
	printf("\n\nDigite um número que esteja na matriz:");
	scanf("%i", &num);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if( num == mat[i][j]){
				tem = 1;
				break;
			}
		}
		if(tem){
			break;
		}
	}
	
	if(tem){
		printf("\n*********************");
		printf("\n*|\aPessoa de Sorte. |*");
		printf("\n*********************\n\n");
	} else{
		printf("\n****************************");
		printf("\n*| \aTu és azarado demais!. |*");
		printf("\n****************************\n\n");
	}
	

	return 0;
}
