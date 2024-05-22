//Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
//hipotenusa =√a2 + b2.
//Faca uma funcao que receba os valores de a e b e calcule o
//valor da hipotenusa atraves da equacao.

//Make a program calculeta the hipotenusa
#include <stdio.h>
#include <math.h>
    float hipotenusa(float a,float b,float resultado){
        a=a*a;
        b=b*b;
        resultado=a+b;
        resultado=sqrt(resultado);
        printf("The hipotenusa is igual %.2f",resultado);
    }
    int main(){
        float a=0,b=0,resultado=0,comecar=0;
        printf("Ente value the a:");
        scanf("%f",&a);
        printf("Ente value the b:");
        scanf("%f",&b);
        comecar=hipotenusa(a,b,resultado);
    }
