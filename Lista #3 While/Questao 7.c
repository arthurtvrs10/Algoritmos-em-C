#include <stdio.h>
#include <locale.h>

int main(void){
    int num;
    int maior = -1000000, menor = 1000000;
    int primeiro = 1; // variável de controle

    setlocale(LC_ALL, "Portuguese");

    while(1){
        printf("Digite o número: ");
        scanf("%i", &num);

        if(num < 0){
            break;
        }

        if(primeiro){
            maior = menor = num;
            primeiro = 0;
        } else {
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
        }
    }

    if(primeiro){
        printf("Nenhum número válido foi digitado.\n");
    } else {
        printf("O maior número lido foi %i\n", maior);
        printf("O menor número lido foi %i\n", menor);
    }

    return 0;
}

