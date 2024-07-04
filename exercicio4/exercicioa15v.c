//Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele
//mentos repetidos

#include <stdio.h>

int main() {
    int v[20], vv[20], a, c, s = 0;
    for (a = 0; a < 20; a++) {
        printf("Enter a number:\n");
        scanf("%i", &v[a]);
    }
    for (a = 0; a < 20; a++) {
        int duplicado = 0;
        for (c = 0; c < s; c++) {
            if (v[a] == vv[c]) {
                duplicado = 1;
                break;
            }
        }
        if (duplicado==0) {
            vv[s] = v[a];
            s++;
        }
    }
    for (a = 0; a < s; a++) {
        printf("%i ", vv[a]);
    }
}
