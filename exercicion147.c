//add prime numbers until 2000000
#include <stdio.h>

int main() {
    int s = 0, c = 0, i = 2, j, p;
    while (c < 2000000) {
        p = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                p = 0; 
                break;
            }
        }

        if (p) {
            s += i; 
            c++; 
        }

        i++; 
    }

    printf("the addition is %i", s);

    return 0;
}
