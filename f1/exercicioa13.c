//Leia uma distancia em quilometros e apresente-a convertida em milhas. A formula de 
//conversao e:M =K/1,61 , sendo K a distancia em quilometros e M em milhas.
//Read a distance in km and show in miles.
#include <stdio.h>
int main(){
    float q,m;
    printf("Enter a distance in km");
    scanf("%f",&q);
    m=q/1.61;
    printf("This distance in miles is igual %.2f",m);
}
