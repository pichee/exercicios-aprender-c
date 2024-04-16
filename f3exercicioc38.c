#include <stdio.h>

int main() {
    int a = 1, b, c;

    while (a < 1000) {
        b = a + 1;
        while (b < 1000) {
            c = 1000 - a - b;
            if (c > b && a * a + b * b == c * c) {
                printf("Terno pitagórico encontrado: a = %d, b = %d, c = %d\n", a, b, c);
                printf("Produto abc: %d\n", a * b * c);
                return 0;
            }
            b++;
        }
        a++;
    }

    printf("Terno pitagórico não encontrado.\n");
    return 0;
}
