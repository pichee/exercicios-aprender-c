//Faca um programa que leia uma quantidade qualquer de numeros armazenando-os na
//memoria e pare a leitura quando o usuario entrar um numero negativo. Em seguida,
//imprima o vetor lido. Use a func¸ao REALLOC.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int tamanho = 0;
    int numero;

    printf("Entre com numeros (numero negativo para parar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

   
        int *temp = realloc(array, (tamanho + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao realocar memória!\n");
            free(array);
            return 1;
        }
        array = temp;

        array[tamanho] = numero;
        tamanho++;
    }


    printf("Numeros lidos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");


    free(array);

    return 0;
}
