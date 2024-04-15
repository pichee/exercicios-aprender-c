//Entter how many prime numbers will be somation
#include <stdio.h>

int main() {
    int n, s = 0, c = 0, i = 2, j, p;
    
    printf("Enter a number:\n");
    scanf("%i", &n);

    if (n < 0) {
        printf("ERROR");
    }

    while (c < n) {
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

    printf("The sum of the first %i prime numbers is %i\n", n, s);

    return 0;
}
