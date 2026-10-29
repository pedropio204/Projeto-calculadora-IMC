#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float peso;
    float altura;
    float imc;
    char situacao[30];
    
    printf("==========================================\n");
    printf("        SISTEMA: CALCULADORA DE IMC       \n");
    printf("==========================================\n");
    printf("Proposito: Calcular o Indice de Massa Corporal\n");
    printf("           e classificar a situacao de saude.\n");
    printf("==========================================\n\n");
    printf("Ola! Seja bem-vindo(a)!\n");
    printf("Vamos cuidar da sua saude hoje?\n\n");
    
    do {
        printf("Insira seu peso em KG (entre 1 e 500): ");
        scanf("%f", &peso);
        if (peso <= 0 || peso > 500) {
            printf("Erro: Peso invalido! Tente novamente.\n\n");
        }
    } while (peso <= 0 || peso > 500);

    do {
        printf("Agora insira sua altura em metros (ex: 1.75): ");
        scanf("%f", &altura);
        if (altura < 0.5 || altura > 2.5) {
            printf("Erro: Altura invalida! Tente novamente.\n\n");
        }
    } while (altura < 0.5 || altura > 2.5);
    
    imc = peso / (altura * altura); 
    
    if (imc < 18.5) {
        strcpy(situacao, "Abaixo do peso"); 
    } else {
        if (imc < 25) {
            strcpy(situacao, "Peso Normal"); 
        } else {
            if (imc < 30) {
                
                strcpy(situacao, "Sobrepeso");
            } else {
                if (imc < 35) {
                    strcpy(situacao, "Obesidade Grau I");
                } else {
                    if (imc < 40) {
                        strcpy(situacao, "Obesidade Grau II");
                    } else {
                        strcpy(situacao, "Obesidade Grau III");
                    } 
                } 
            } 
        }
    } 
    
    printf("Seu IMC é: %.2f\n", imc);
    printf("Sua situação é: %s\n", situacao);
    
    return 0;
}