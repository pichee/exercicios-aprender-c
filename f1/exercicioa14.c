//Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao
//e:R = G ∗ π/180, sendo G o angulo em graus e R em radianos e π = 3.14.
//Read  a angle in degrees and show in radians;
#include <stdio.h>
int main(){
    float r,g;
    float pi=3.14;
    printf("How much is your angle");
    scanf("%f",&g);
    r=g *pi/180;
    printf("This is igual %.2f degrees",r);
}
