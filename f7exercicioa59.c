//Faca uma funcao que recebe, por parametro, 2 vetores de 10 elementos inteiros e que 
//calcule e retorne, tambem por parametro, o vetor uniao dos dois primeiros.

//Make a function receb two vectores with 10 elements each and show the union abou both

#include <stdio.h>

void uniao(int a[10], int b[10], int c[20], int *tam_union) {
    int i, j;
    int contador = 0;


    for (i = 0; i < 10; i++) {
        c[contador++] = a[i];
    }
    for (i = 0; i < 10; i++) {
        int found = 0;
        for (j = 0; j < 10; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            c[contador++] = b[i];
        }
    }

    // Atualiza o tamanho do vetor união
    *tam_union = contador;
}

int main() {
    int a[10], b[10], c[20];
    int i, tam_union;

    for (i = 0; i < 10; i++) {
        printf("Enter a value for Matrix A: ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("Enter a value for Matrix B: ");
        scanf("%d", &b[i]);
    }

    uniao(a, b, c, &tam_union);

    printf("Union is:\n");
    for (i = 0; i < tam_union; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
