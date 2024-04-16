//Leia uma velocidade em km/h (quilometros por hora) e apresente-a convertida em m/s 
//(metros por segundo). A formula de conversao e:  M = K/3.6, sendo K a velocidade em
//km/h e M em m/s.
//Read a speed in km/h and show in m/s
#include <stdio.h>
int main(){
    float m,km;
    printf("Enter a speed in km/h ");
    scanf("%f",&km);
    m=km/3.6;
    printf("this speed is igual %.2f m/s",m);
}
