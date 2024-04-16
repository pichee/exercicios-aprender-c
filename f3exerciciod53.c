//Escreva um programa que leia um numero inteiro positivo ´ n e em seguida imprima n
// linhas do chamado Triangulo de Floyd.
//Write a program that reads a positive integer 'n' and then prints n lines of the so-called Floyd's Triangle. For n = 6, we have:
#include <stdio.h>

int main() {
    int altura;

    // Solicita ao usuário a altura do triângulo
    printf("Digite a altura do Triangulo de Floyd: ");
    scanf("%d", &altura);

    // Variável para controlar o valor a ser impresso no triângulo
    int valor = 1;

    // Loop para cada linha do triângulo
    for (int linha = 1; linha <= altura; linha++) {
        // Loop para imprimir os valores da linha atual
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", valor);
            valor++; // Incrementa o valor para o próximo número
        }
        printf("\n"); // Pula para a próxima linha após imprimir todos os valores
    }

    return 0;
