#include <stdio.h>

int main(void) {
    int sexo;
    float imc, altura, peso;

    // Getting user inputs
    printf("Qual seu genero: \n1-Homem \n2-Mulher");
    printf("\nDigite: ");
    scanf("%i", &sexo);

    printf("Qual seu peso(70.0): ");
    scanf("%f", &peso);

    printf("Qual sua altura(1.80): ");
    scanf("%f", &altura);

    // Calculating IMC
    imc = peso / (altura * altura);

    // Logic for Men
    if(sexo == 1) {
        if(imc < 16.9) {
            printf("\nMuito abaixo do peso\n");
        } else if(imc >= 17.0 && imc < 18.4) {
            printf("\nAbaixo do peso\n");
        } else if(imc >= 18.5 && imc < 24.9) {
            printf("\nPeso normal\n");
        } else if(imc >= 25.0 && imc < 29.9) {
            printf("\nAcima do peso\n");
        } else if(imc >= 30.0 && imc < 34.9) {
            printf("\nObesidade Grau I\n");
        } else if(imc >= 35.0 && imc < 40.0) {
            printf("\nObesidade Grau II\n");
        } else {
            printf("\nObesidade Grau III\n");
        }
    } 
    // Logic for Women
    else if(sexo == 2) {
        if(imc < 18.5) {
            printf("\nMuito abaixo do peso\n");
        } else if(imc >= 18.5 && imc < 24.9) {
            printf("\nPeso normal\n");
        } else if(imc >= 25.0 && imc < 29.9) {
            printf("\nAcima do peso\n");
        } else if(imc >= 30.0 && imc < 34.9) {
            printf("\nObesidade Grau I\n");
        } else if(imc >= 35.0 && imc < 39.9) {
            printf("\nObesidade Grau II\n");
        } else {
            printf("\nObesidade Grau III\n");
        }
    } 
    // Invalid gender input
    else {
        printf("\nOpcao invalida! Digite 1 ou 2.\n");
    }

    return 0;
}

