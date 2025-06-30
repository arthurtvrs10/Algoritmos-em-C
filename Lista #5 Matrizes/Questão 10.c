#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");

    int i, j;
    int mat[3][4] = {0}; // Inicializa a matriz com 0
    int opcao;
    int linha, coluna;
    int total = 0;
    int preco;

    do {
        printf("\n*******************************************\n");
        printf("**|\tVENDA DE PASSAGENS DE ÔNIBUS\t|**");
        printf("\n**|\t1 - Visualizar assentos\t\t|**");
        printf("\n**|\t2 - Comprar assento\t\t|**");
        printf("\n**|\t3 - Ver total arrecadado\t|**");
        printf("\n**|\t4 - Sair\t\t\t|**");
        printf("\n*******************************************\n");
        printf("Escolha uma opção: ");
        scanf("%i", &opcao);
        system("CLS");

        switch(opcao) {
            case 1:
                printf("\nMapa de assentos (0 = livre, 1 = ocupado):\n");
                for(i = 0; i < 3; i++) {
                    printf(" | ");
                    for(j = 0; j < 4; j++) {
                        printf(" %i ", mat[i][j]);
                    }
                    printf(" |\n");
                }
                break;

            case 2:
            	printf("\n[\tPoltronas corredor R$10.00\t]");
            	printf("\n[\tPoltronas janela R$20.00\t]");
                printf("\n\nDigite a linha (0 a 2): ");
                scanf("%i", &linha);
                printf("Digite a coluna (0 a 3): ");
                scanf("%i", &coluna);

                if(linha >= 0 && linha < 3 && coluna >= 0 && coluna < 4) {
                    if(mat[linha][coluna] == 0) {
                        mat[linha][coluna] = 1;
                        if(coluna == 0 || coluna == 3) {
                            preco = 20;
                            printf("\aAssento na janela selecionado. Valor: R$20\n");
                        } else {
                            preco = 10;
                            printf("\aAssento no corredor selecionado. Valor: R$10\n");
                        }
                        total += preco;
                    } else {
                        printf("\aAssento já está ocupado!\n");
                    }
                } else {
                    printf("\aPosição inválida!\n");
                }
                break;

            case 3:
                printf("\aTotal arrecadado com as vendas: R$%i\n", total);
                break;

            case 4:
                printf("Saindo do sistema...\n");
                break;

            default:
                printf("\aOpção inválida!\n");
                break;
        }
    } while(opcao != 4);

    return 0;
}

