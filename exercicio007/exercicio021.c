//Escreva uma funcao para determinar a quantidade de numeros primos abaixo

//Show how much numbers prime there is until n
#include <stdio.h>
#include <stdbool.h>


bool eh_primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}


int contar_primos(int n) {
    int contador = 0;
    for (int i = 2; i < n; i++) {
        if (eh_primo(i)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    int quantidade_primos = contar_primos(n);
    printf("Existem %d números primos menores que %d.\n", quantidade_primos, n);

    return 0;
}
