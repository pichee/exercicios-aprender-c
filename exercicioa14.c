//Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
//e:R = G ∗ π/180, sendo G o angulo em graus e R em radianos e π = 3.14.
#include <stdio.h>
int main(){
    float r,g;
    float pi=3.14;
    printf("O seu angulo possui quantos graus");
    scanf("%f",&g);
    r=g *pi/180;
    printf("A conversao em radianos é igual a %.2f",r);
}
