//Fac¸a uma func¸ao recursiva para calcular os numeros de Catalan. Os numeros de Cata- ´
//lan sao definidos pela seguinte recursao
//C(n) = 1 se n = 0
//C(n) = 2(2n−1)
//n+1 C(n − 1) se n > 0
//Alguns numeros desta sequencia sao: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796,
//58786...

//make a function that calculate the numbers the cantalan
//C(n) = 1 se n = 0
//C(n) = 2(2n−1)
//n+1 C(n − 1) se n > 0
#include <stdio.h>

int catalan(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (2 * (2 * n - 1) * catalan(n - 1)) / (n + 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Número de Catalan C(%d) = %d\n", n, catalan(n));
    return 0;
}
