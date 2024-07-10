//Dados n e dois numeros inteiros positivos, i e j, diferentes de 0, imprimir em ordem
//crescente os n primeiros naturais que sao multiplos de i ou de j e ou de ambos. Exemplo:
//Para n = 6, i = 2 e j = 3 a sa´ıda devera ser: 0,2,3,4,6,8.

//Given n and two positive integers, i and j, different from 0, print in ascending order the first n natural numbers that are multiples of i or j, or both. Example:
//For n = 6, i = 2, and j = 3, the output should be: 0, 2, 3, 4, 6, 8.
#include <stdio.h>

int main() {
    int i, j, n, a = 1, count = 0;

    printf("Enter a positive integer (cannot be zero): ");
    scanf("%d", &i);

    printf("Enter another positive integer (cannot be zero): ");
    scanf("%d", &j);

    printf("How many multiples do you want (cannot be zero): ");
    scanf("%d", &n);

    if (i == 0 || j == 0 || n == 0) {
        printf("ERROR: Inputs cannot be zero.\n");
    } else {
        printf("Output: ");

        while (count < n) {
            if (a % i == 0 || a % j == 0) {
                printf("%d ", a);
                count++;
            }
            a++;
        }
    }

    return 0;
}
