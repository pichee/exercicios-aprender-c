//Escreva um programa que leia um numero inteiro positivo n e em seguida imprima n
// linhas do chamado Triangulo de Floyd.
//Write a program that reads a positive integer 'n' and then prints n lines of the so-called Floyd's Triangle. For n = 6, we have:
#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura do Triangulo de Floyd: ");
    scanf("%d", &altura);


    int valor = 1;

    
    for (int linha = 1; linha <= altura; linha++) {
     
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", valor);
          
        }
        printf("\n");
    }

    return 0;
