//Faca um programa para associar nomes as linhas de uma matriz de caracteres. O
//usuario ira informar o numero maximo de nomes que poderao ser armazenados. Cada
//nome podera ter ate 30 caracteres com o ´ ’\0’. O usuario poder  a usar 5 opcoes diferen
//tes para manipular a matriz:
//(a) Gravar um nome em uma linha da matriz;
//(b) Apagar o nome contido em uma linha da matriz;
//(c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
//(d) Informar um nome, procurar a linha onde ele se encontra e apagar;
//(e) Pedir para recuperar o nome contido em uma linha da matriz;

//make a check list

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int names;
    printf("How many names do you want in your vector: ");
    scanf("%d", &names);
    getchar(); 

    char **gravar = (char **)malloc(names * sizeof(char *));
    for (int i = 0; i < names; i++) {
        gravar[i] = (char *)malloc(30 * sizeof(char));
        gravar[i][0] = '\0';
    }

    int decision = 1;
    while (decision != 0) {
        int make;
        printf("\nWhat do you want to do?\n"
               "[1] Enter a name\n"
               "[2] Erase a name\n"
               "[3] Change a name\n"
               "[4] Find a name and erase\n"
               "[5] Turn off\n"
               "Enter your choice: ");
        scanf("%d", &make);
        getchar(); 

        if (make == 1) {
            int line;
            printf("Enter the line number to enter a name: ");
            scanf("%d", &line);
            getchar(); 
            if (line >= 0 && line < names) {
                printf("Enter the name: ");
                fgets(gravar[line], 30, stdin);
                gravar[line][strcspn(gravar[line], "\n")] = '\0'; 
            } else {
                printf("Invalid line number.\n");
            }
        } else if (make == 2) {
            int line;
            printf("Enter the line number to erase the name: ");
            scanf("%d", &line);
            if (line >= 0 && line < names) {
                gravar[line][0] = '\0'; string
            } else {
                printf("Invalid line number.\n");
            }
        } else if (make == 3) {
            char aux[30];
            printf("Enter the name to be changed: ");
            fgets(aux, 30, stdin);
            aux[strcspn(aux, "\n")] = '\0';
            int found = 0;
            for (int i = 0; i < names; i++) {
                if (strcmp(aux, gravar[i]) == 0) {
                    printf("Name found at line %d. Enter the new name: ", i);
                    fgets(gravar[i], 30, stdin);
                    gravar[i][strcspn(gravar[i], "\n")] = '\0'; 
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Name not found.\n");
            }
        } else if (make == 4) {
            char aux[30];
            printf("Enter the name to be erased: ");
            fgets(aux, 30, stdin);
            aux[strcspn(aux, "\n")] = '\0'; // Remover o '\n'
            int found = 0;
            for (int i = 0; i < names; i++) {
                if (strcmp(aux, gravar[i]) == 0) {
                    gravar[i][0] = '\0'; // Apagar a string
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Name not found.\n");
            }
        } else if (make == 5) {
            decision = 0;
        } else {
            printf("Invalid option.\n");
        }
    }

    for (int i = 0; i < names; i++) {
        free(gravar[i]);
    }
    free(gravar);
    return 0;
}