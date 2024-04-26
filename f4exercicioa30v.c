//Faca um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
//interseccao entre os 2 vetores anteriores, ou seja, que conte m apenas os numeros que
//estao em ambos os vetores. Nao deve conter numeros repetidos.

//make a program read and show the numbers in the two vectore but if the numbers be igual

#include <stdio.h>

int main() {
    int a, v[10], v1[10], vu[10], a1, o = 0;

    printf("Vector 1\n");
    for (a = 0; a < 10; a++) {
        printf("Enter a number: ");
        scanf("%i", &v[a]);
    }

    printf("Vector 2\n");
    for (a = 0; a < 10; a++) {
        printf("Enter a number: ");
        scanf("%i", &v1[a]); 
    }

    for (a = 0; a < 10; a++) {
        for (a1 = 0; a1 < 10; a1++) {
            if (v[a] == v1[a1]) {
                vu[o] = v[a];
                o++;
            }
        }
    }

    printf("Common elements:\n");
    for (a = 0; a < o; a++) {
        printf("%i\t", vu[a]);
    }

}
