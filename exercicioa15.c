//Leia um angulo em radianos e apresente-o convertido em graus. A formula de conversao
//e:G = R ∗ 180/π, sendo G o angulo em graus e
 R em radianos e π = 3.14.
//Read a angule in radianes and show 
//covert in degreeds
#include <stdio.h>
int main(){
    float g,r;
    float pi=3.14;
    printf("How much radianes do you have");
    scanf("%f",&r);
    g=r*180/pi;
    printf("This igual a  %.2f degreeds",g);
}
