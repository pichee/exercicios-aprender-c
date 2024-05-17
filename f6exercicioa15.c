////Faca um programa que leia um vetor com dados de 5 livros: tıtulo (maximo 30 letras)
//autor (maximo 15 letras) e ano. Procure um livro por tıtulo, perguntando ao usuario qual
//tıtulo deseja buscar. Mostre os dados de todos os livros encontrados.

//show if you can found a book
#include <stdio.h>
#include <string.h>

struct vetor {
    char book[5][31];
    char autor[5][16];
    int year[5];
};

int main() { 
    struct vetor vetor;
    int a;
    char bou[31];
    

    for (a = 0; a < 2; a++) {
        printf("Name the book: ");
        scanf(" %30[^\n]", vetor.book[a]);  
        printf("Name the autor: ");
        scanf(" %15[^\n]", vetor.autor[a]);
        printf("Year the book: ");
        scanf("%d", &vetor.year[a]);
    }
    

    printf("Which book are you looking for: ");
    scanf(" %30[^\n]", bou);

    for (a = 0; a < 2; a++) {
        if (strcmp(vetor.book[a], bou) == 0) {
            printf("Book found:\n");
            printf("Name: %s\n", vetor.book[a]);
            printf("Author: %s\n", vetor.autor[a]);
            printf("Year: %d\n", vetor.year[a]);
            return 0;  
        }
    }
    printf("Book not found\n");
    
    return 0;
}
