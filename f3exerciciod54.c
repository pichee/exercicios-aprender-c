//Faca um programa que receba um numero inteiro maior do que 1, e verifique se o numero 
//fornecido e primo ou nao.
//verify if is a number prime or not
#include <stdio.h>

int main() {
    int n, j, p, c = 0;

    printf("Enter a number bigger than 1: ");
    scanf("%i", &n);

    for (p = 2; p <= n / 2; p++) {
        if (n % p == 0) {
            c = 1;
            break;
        }
    }

    if (c == 0 && n != 1) {
        printf("%i is a prime number.\n", n);
    } else {
        printf("%i is not a prime number.\n", n);
    }

    return 0;
}
