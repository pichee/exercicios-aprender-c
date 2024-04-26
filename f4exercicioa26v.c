//Faca um programa que calcule o desvio padrao de um vetor v contendo n = 10 numeros,
//onde m e a media do vetor

//Make a program read a desvio padrão;
#include <stdio.h>
#include <math.h>

int main() {
    float v[10], s = 0, d, dp;
    int a;
    for (a = 0; a < 10; a++) {
        printf("Enter a number: ");
        scanf("%f", &v[a]);
        s += v[a];
    }
    s = s / 10; 


    for (a = 0; a < 10; a++) {
        d = v[a] - s;
        s += d * d;
    }


    dp = sqrt(s / 10);

    printf("Standard deviation is %.2f", dp);

    return 0;
}
