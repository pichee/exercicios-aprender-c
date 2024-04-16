//Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
//(quilometros por hora). A formula de conversao e: K = M ∗ 3.6, sendo K a velocidade
//em km/h e M em m/s.
#include <stdio.h>
int main(){
    float m,km;
    printf("Enter a speed in m/s ");
    scanf("%f",&m);
    km=m*3.6;
    printf("this speed is igual %.2f km",km);
}
