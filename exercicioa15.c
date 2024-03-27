//Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao˜
//e: ´ G = R ∗ 180/π, sendo G o angulo em graus e ˆ R em radianos e π = 3.14.
#include <stdio.h>
int main(){
    float g,r;
    float pi=3.14;
    printf("Seu angulo possui quantos radianos");
    scanf("%f",&r);
    g=r*180/pi;
    printf("Essa quantidade de radianos equivale a %.2f graus",g);
}
