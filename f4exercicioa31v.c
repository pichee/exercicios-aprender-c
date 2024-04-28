//Faca um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao
//entre os 2 vetores anteriores, ou seja, que contem os numeros dos dois vetores. Nao
//deve conter numeros repetidos

//show two vectores and show the union
#include <stdio.h>

int main() {
    int a, v[10], v1[10], vu[20], a1=0, exists;

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


    for(a = 0; a < 10; a++) {
        vu[a1] = v[a];
        a1++;
    }

    for(a = 0; a < 10; a++) {
        exists = 0;
        for(int i = 0; i < a1; i++) {
            if(v1[a] == vu[i]) {
                exists = 1;
                break;
            }
        }
        if(!exists) { 
            vu[a1] = v1[a];
            a1++;
        }
    }

    printf("--------------\n");
    printf("Union of the two vectors without duplicates:\n");
    for(a = 0; a < a1; a++) {
        printf("%i\n", vu[a]);
    }

    return 0;
}
