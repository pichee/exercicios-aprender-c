//Leia uma distancia em milhas e apresente-a convertida em quil ˆ ometros. A f ˆ ormula de ´
//conversao˜ e: ´ K = 1, 61 ∗ M, sendo K a distancia em quil ˆ ometros e ˆ M em milhas.
#include <stdio.h>
int main(){
    float m,q;
    printf("digite a distancia em milhas ");
    scanf("%f",&m);
    q=1.61 * m;
    printf("essa distancia em quilometros é igual a %.2f",q);
}
