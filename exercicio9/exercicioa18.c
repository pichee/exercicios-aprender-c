//Implemente uma func¸ao que calcule a area da superfıcie e o volume de uma esfera de
//raio R. Essa funcao deve obedecer ao prototipo:
//void calc_esfera(float R, float *area, float *volume)
//A area da superfıcie e o volume sao dados, respectivamente, por:
//A = 4 ∗ p ∗ R2
//V = 4/3 ∗ p ∗ R3

//Make a function that caluclate the area and volume of a ball
#include <stdio.h>
    void calc_esfera(float R, float *area, float *volume){
        printf("The area is %.2f\nthe volume is %.2f",*area,*volume);
    }
    int main(){
        float a,r,v;
        printf("What is value the R:");
        scanf("%f",&r);
        a=4*3.14*(r*r);
        v=4/3*3.14*(r*r*r);
        calc_esfera(r,&a,&v);
    }
