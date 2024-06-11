//Implemente uma funcao que calcule as ra ızes de uma equacao do segundo grau do tipo 
//Ax2 + Bx + C = 0. Lembrando que:X =−B ±√∆2A
//Onde∆ = B2 − 4AC
//A variavel A tem que ser diferente de zero. 
//• Se ∆ < 0 nao existe real.
//• Se ∆ = 0 existe uma raiz real.
//• Se ∆ ≥ 0 existem duas raızes reais.
//Essa funcao deve obedecer ao seguinte prototipo: 
//int raizes(float A,float B,float C,float * X1,float * X2);
//Essa funcao deve ter como valor de retorno o numero de raızes reais e distintas da
//equacao. Se existirem ra{}ızes reais, seus valores devem ser armazenados nas variaveis 
//apontadas por X1 e X2.

//Make a function that calculate a function the a second degree equation.
#include <stdio.h>
#include <math.h>
    int raizes(float a,float b,float c,float * x1,float * x2){
    printf("%f %f",x1,x2);
    }
    int main(){
    float a,b,c,x,x1;
    printf("Enter a number for A:");
    scanf("%f",&a);
    printf("Enter a number for B:");
    scanf("%f",&b);
    printf("Enter a number for C:");
    scanf("%f",&c);
    if(4*a*c<0){
    printf("Doesn't exist");
    return 0;
    }
    x=(b*2)-(4*a*c);
   x1=(b*2)-(4*a*c);
   x=sqrt(x);
   x1=sqrt(x1);
   x=(-b+x)/(2*a);
   x1=(-b-x)/(2*a);
   raizes(a,b,c,&x,&x1);
    }