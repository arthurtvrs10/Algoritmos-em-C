#include <stdio.h>
#include <locale.h>

int main(void){
    int num;
    int maior = -1000000, menor = 1000000;
    int primeiro = 1; // vari�vel de controle

    setlocale(LC_ALL, "Portuguese");

    while(1){
        printf("Digite o n�mero: ");
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
        printf("Nenhum n�mero v�lido foi digitado.\n");
    } else {
        printf("O maior n�mero lido foi %i\n", maior);
        printf("O menor n�mero lido foi %i\n", menor);
    }

    return 0;
}

