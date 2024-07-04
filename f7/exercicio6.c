//Faca uma funcao que receba 3 numeros inteiros como parametro, representando horas,
//minutos e segundos, e os converta em segundos.

//Make a function receb 3 value int and showing the total of seeconds
#include <stdio.h>
    int segundos(int s,int m,int h,int soma){
        m=m*60;
        h=h*3600;
        soma=m+h+s;
        printf("The total of seconds is %i",soma);
    }
        
        int main(){
            int a=0,se=0,mi=0,aux=0,ho=0;
            printf("Enter the seconds:");
            scanf("%i",&se);
            printf("Enter the minuts:");
            scanf("%i",&mi);
            printf("Enter the hours:");
            scanf("%i",&ho);
            a=segundos(se,mi,ho,aux);
        }
