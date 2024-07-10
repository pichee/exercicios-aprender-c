//Faca uma funcao que receba um inteiro N como parametro, calcule e retorne o resultado
//da seguinte serie:
//S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3)

//Make a program calculate a number using this formula
//S = 2/4 + 5/5 + 10/6 + ... + (N2 + 1)/(N + 3)
#include <stdio.h>
    float funcao(float cima,float baixo,float aux,float n,float r){
   aux=1;
        while (aux<=n)
        {
            cima=aux*aux+1;
            baixo=aux+3;
            aux++;
            r=r+cima/baixo;
        }
        
        printf("The result is %.2f",r);
        
    }
    int main(){
        float f=0,d=0,s=0,n=0,r=0;
        printf("Enter a number:");
        scanf("%f",&n);
        funcao(f,d,s,n,r);
    }
