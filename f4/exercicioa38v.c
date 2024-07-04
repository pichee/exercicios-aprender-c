//Peca ao usuario para digitar dez valores numericos e ordene por ordem crescente esses
//valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
//final na tela os valores em ordem.

//Create a vectore and show in crescent order;
#include <stdio.h>

void ordenar_vetor(float vetor[], int tamanho) {
    int i, j;
    float temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
               
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    float vetor[10];
    int i;

   
    printf("Digite 10 números reais:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    ordenar_vetor(vetor, 10); 

    
    printf("Elementos do vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
