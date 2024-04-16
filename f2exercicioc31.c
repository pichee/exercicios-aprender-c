//. Faca um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela
//a seguir, verifique e mostra qual a classificac¸ao dessa pessoa.
//Make a program that classffy a person base your tall and your weight.
//Using the frame for classffy
//Obs:I don't know want put the frame :/


#include <stdio.h>

int main()
{
    float p,t;
    printf("What is you tall?\n");
    scanf("%f",&t);
    printf("What is you weight?\n");
    scanf("%f",&p);
    
    
    
    if (t < 1.20 && p < 60) {
        printf("Your classification is A");
    }
    else if (t < 1.20 && p >= 60 && p <= 90) {
        printf("Your classification is D");
    }
    else if (t < 1.20 && p > 90) {
        printf("Your classification is F");
    }
    else if (t >= 1.20 && t < 1.70 && p < 60) {
        printf("Your classification is B");
    }
    else if (t >= 1.20 && t < 1.70 && p >= 60 && p <= 90) {
        printf("Your classification is E");
    }
    else if (t >= 1.70 && p < 60) {
        printf("Your classification is C");
    }
    else if (t >= 1.70 && p >= 60 && p <= 90) {
        printf("Your classification is F");
    }
    else if (t >= 1.70 && p > 90) {
        printf("Your classification is G");
    }
    else {
        printf("Your classification is H");
    }}
