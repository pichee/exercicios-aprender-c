//Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s ˆ
//(metros por segundo). A formula de convers ´ ao˜ e: ´ M = K/3.6, sendo K a velocidade em
//km/h e M em m/s.
#include <stdio.h>
int main(){
    float m,km;
    printf("digite a velocidade em km/h ");
    scanf("%f",&km);
    m=km/3.6;
    printf("essa velocidade corresponde a %2.f metros por segundo",m);
}
