//Faca umam funcao que receba a altura e o raio de um cilindro circular e retorne o volume
//do cilindro. O volume de um cilindro circular e calculado por meio da seguinte formula:
//V = π ∗ raio2 ∗ altura, onde π = 3.141592.

//Make a function the receb the height and the radios the a cilinder and 
//after show your volume

#include <stdio.h>
    int funcao(float altura,float raio,float re){
        re = 3.14 * (raio*2) * altura;
        printf("The volume is: %.2f",re);
    }
    int main(){
        float heig,raio,aux,comeca;
        printf("Enter the radios:");
        scanf("%f",&raio);
        printf("Enter the height:");
        scanf("%f",&heig);
        comeca=funcao(heig,raio,aux);
    }
