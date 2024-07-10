//Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >> A11, ou seja,
//esta ordenado em ordem crescente ate o sexto elemento, e a partir
//desse elemento esta ordenado em ordem decrescente. Dado o vetor da questao anterior,
//proponha um algoritmo para ordenar os elementos.

//MAke a vectore and unti 6 order crescent after decrescent order

#include <stdio.h>

void ordenar_crescente(float vetor[], int inicio, int fim) {
    int i, j;
    float temp;
    for (i = inicio; i < fim; i++) {
        for (j = inicio; j < fim - i + inicio; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void ordenar_decrescente(float vetor[], int inicio, int fim) {
    int i, j;
    float temp;
    for (i = inicio; i < fim; i++) {
        for (j = inicio; j < fim - i + inicio; j++) {
            if (vetor[j] < vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    float vetor[11];
    int i;

    printf("Digite 11 números reais:\n");
    for (i = 0; i < 11; i++) {
        scanf("%f", &vetor[i]);
    }

    ordenar_crescente(vetor, 0, 5);
    ordenar_decrescente(vetor, 6, 10);

    printf("Elementos do vetor ordenado:\n");
    for (i = 0; i < 11; i++) {
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
