#include <stdio.h>
#include <locale.h>

int main(void){
    int mat[4][4], i, j;
    setlocale(LC_ALL, "Portuguese");

    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    int somaReferencia = 0;
    int somaLinha = 0;
    int somaColuna = 0;
    
    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            scanf(" %i ", &mat[i][j]);
        }
    }

    // Exibe a matriz
    printf("\nMatriz:\n");
    for(i = 0; i < 4; i++){
        printf(" | ");
        for(j = 0; j < 4; j++){
            printf(" %i ", mat[i][j]);
        }
        printf("|\n");
    }

    // Calcula a soma da diagonal principal
    for(i = 0; i < 4; i++){
        somaDiagonalPrincipal += mat[i][i];
    }

    // Calcula a soma da diagonal secund�ria
    for(i = 0; i < 4; i++){
        somaDiagonalSecundaria += mat[i][4 - 1 - i];
    }

    // Soma de refer�ncia: soma da primeira linha
    somaReferencia = 0;
    for(j = 0; j < 4; j++){
        somaReferencia += mat[0][j];
    }

    printf("\nSoma das linhas:\n");
    // Verifica e imprime a soma de cada linha
    for(i = 0; i < 4; i++){
        somaLinha = 0;
        for(j = 0; j < 4; j++){
            somaLinha += mat[i][j];
        }
        printf("Linha %i: %i\n", i+1, somaLinha);
        if(somaLinha != somaReferencia){
            printf("\nN�o � quadrado m�gico (linha %i diferente).\n", i+1);
            return 0;
        }
    }

    printf("\nSoma das colunas:\n");
    // Verifica e imprime a soma de cada coluna
    for(j = 0; j < 4; j++){
        somaColuna = 0;
        for(i = 0; i < 4; i++){
            somaColuna += mat[i][j];
        }
        printf("Coluna %i: %i\n", j+1, somaColuna);
        if(somaColuna != somaReferencia){
            printf("\nN�o � quadrado m�gico (coluna %i diferente).\n", j+1);
            return 0;
        }
    }

    // Imprime as somas das diagonais
    printf("\nSoma da diagonal principal: %i\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secund�ria: %i\n", somaDiagonalSecundaria);

    // Verifica as diagonais
    if(somaDiagonalPrincipal != somaReferencia || somaDiagonalSecundaria != somaReferencia){
        printf("\nN�o � quadrado m�gico (diagonais diferentes).\n");
        return 0;
    }

    // Se passou por todos os testes, � quadrado m�gico
    printf("\n� um quadrado m�gico! Soma m�gica: %i\n", somaReferencia);

    return 0;
}

