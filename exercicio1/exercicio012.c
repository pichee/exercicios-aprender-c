//Leia uma distancia em milhas e apresente-a convertida em quil ˆ ometros. A formula de
//conversao e:K = 1, 61 ∗ M, sendo K a distancia em quilometros e  M em milhas.
//Read a distance in miles and show in km 
#include <stdio.h>
int main(){
    float m,q;
    printf("Read a distance in miles");
    scanf("%f",&m);
    q=1.61 * m;
    printf("This distance is igual %.2f km",q);
}
