#include <stdio.h>
#include <math.h>

int main() {
    int l;
    printf("How many lines do you want in your triangle:");
    scanf("%i", &l);
    int c = l + 1;
    int al = 0, ac = 0;
    int v[l][c];

    for (al = 0; al < l; al++) {
        for (ac = 0; ac <= al; ac++) {
            if (ac == 0 || al == ac) {
                v[al][ac] = 1;
            } else {
                unsigned long long fl = 1, fc = 1, fs = 1;
                
        
                for (int i = 1; i <= al; i++) {
                    fl *= i;
                }
                for (int i = 1; i <= ac; i++) {
                    fc *= i;
                }
                for (int i = 1; i <= al - ac; i++) {
                    fs *= i;
                }

               
                v[al][ac] = fl / (fc * fs);
            }
        }
    }

    for (al = 0; al < l; al++) {
        for (ac = 0; ac <= al; ac++) {
            printf("%d ", v[al][ac]);
        }
        printf("\n");
    }

    return 0;
}
