//Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
//(quilometros por hora). A f ˆ ormula de convers ´ ao˜ e: ´ K = M ∗ 3.6, sendo K a velocidade
//em km/h e M em m/s.
#include <stdio.h>
int main(){
    float m,km;
    printf("Digite a velocidade em m/s ");
    scanf("%f",&m);
    km=m*3.6;
    printf("A velocidade em km por hora equivale a %.2f",km);
}
