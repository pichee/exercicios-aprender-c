//Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos
//que sao primos e suas respectivas posicoes no vetor

//Read a vectore and show the prime numbers there is.
#include <stdio.h>

int main() {
    int v[10], vi[10], p = 0;
    int a, j;

    for (a = 0; a < 10; a++) {
        printf("Enter a number: ");
        scanf("%i", &v[a]);
        for (j = 2; j * j <= v[a]; j++) {
            if (v[a] % j == 0) {
                break;
            }
        }
        if (j * j > v[a]) {
            vi[p] = v[a];
            p++;
        }
    }

    for (a = 0; a < p; a++) {
        printf("%i\n", vi[a]);
    }
}
