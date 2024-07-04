// Faca um programa para armazenar um livro de receitas e:
//• Crie um vetor de 5 receitas, que deve ter nome (maximo 25 letras), quantidade de
// ingredientes e ingredientes.
//• Para cada receita, leia seu nome e a quantidade de ingredientes. Entao crie e leia
// o vetor de ingredientes, sendo que cada ingrediente contem nome e quantidade.
//• Procure receita por nome, mostrando seus ingredientes se encontrar. Se nao en
// contrar, informe ao usuario. Repita o processo ate digitar uma string vazia. 

//Make a cook book

#include <stdio.h>
#include <string.h>
#define MAX 10

struct receita {
    char receita[26];
    int total;
    char nomedosingre[MAX][31];
    char guardar[10][31];
};

int main() {
    struct receita r[5]; 
    int a, b;

    for (a = 0; a < 5; a++) {
        printf("What is the name of the recipe: ");
        scanf(" %25[^\n]", r[a].receita);
        getchar(); 

        do {
            printf("How many ingredients are there (max 10): ");
            scanf("%d", &r[a].total);
            getchar(); 

            if (r[a].total > 0 && r[a].total <= MAX) {
                b = 1; 
            } else {
                printf("Invalid number of ingredients. Please enter a number between 1 and 10.\n");
                b = 0;
            }
        } while (b == 0);

       
        for (b = 0; b < r[a].total; b++) {
            printf("Enter ingredient %d and its quantity: ", b + 1);
            scanf(" %30[^\n]", r[a].nomedosingre[b]); 
            getchar(); 

            
            strcpy(r[a].guardar[b], r[a].nomedosingre[b]);
        }
    }
    printf("What is the name of the recipe you want: ");
    char recipe[31];
    scanf(" %30[^\n]", recipe);
    getchar(); 

    for (a = 0; a < 5; a++) {
        if (strcmp(recipe, r[a].receita) == 0) {
            printf("\nRecipe\nName: %s\n", r[a].receita);
            for (b = 0; b < r[a].total; b++) {
                printf("Ingredient %d: %s\n", b + 1, r[a].guardar[b]);
            }
            break;
        }
    }

    return 0;
}
