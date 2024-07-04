// Faca um programa que converta coordenadas polares para cartesianas:
//• Crie e leia um ponto em coordenada polar, composto por raio (r) e argumento (a)
//em radianos.
//1
//• Crie outro ponto, agora em coordenada cartesiana, composto por x e y, sabendo
//que x = r ∗ cosa e y = r ∗ sina.

//Make a programa convert polars cordesn for the cartesian plane
#include <stdio.h>
#include <math.h>
    struct plano
    {
        float r,argumento;
    };
    
    int main(){
        struct plano plano;
        float x,y;
        float pi=3.14;
        printf("What is the rad:");
        scanf("%f",&plano.r);
        printf("What is the argument :");
        scanf("%f",&plano.argumento);
        plano.argumento=plano.argumento * (pi / 180.0);
        x=plano.r*cos(plano.argumento);
        y=plano.r*sin(plano.argumento);
        printf("(%2.f)(%2.f)",x,y);

    }
