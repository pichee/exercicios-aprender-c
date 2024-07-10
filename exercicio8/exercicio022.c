//Uma sequencia de Fibonacci generalizada, de f0 a f1 ˆ e definida como fibg(f0, f1, 0), ´
//fibg(f0, f1, 1), fibg(f0, f1, 2), ..., onde:
//fibg(f0, f1, 0) = f0
//fibg(f0, f1, 1) = f1
//fibg(f0, f1, n) = fibg(f0, f1, n-1) + fibg(f0, f1, n-2), se n > 1.

#include <stdio.h>

int fibg(int f0, int f1, int n) {
    if (n == 0) {
        return f0;
    } else if (n == 1) {
        return f1;
    }

    int prev2 = f0;
    int prev1 = f1;
    int current;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int f0 = 0, f1 = 1, n = 10;
    printf("fibg(%d, %d, %d) = %d\n", f0, f1, n, fibg(f0, f1, n));
    return 0;
}
