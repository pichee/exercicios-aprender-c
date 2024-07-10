//Faca a leitura de tres valores e apresente como resultado a soma dos quadrados dos
//tres valores lidos
//Read  three values and show the  result,the addition from squares from
//three values read.
#include <stdio.h>
    int main(){
        int i=0;
        float n,a;
            while (i<3){
                printf("put the number")/
                scanf("%f",&n);
                n=n*n;
                a=a+n;
                i++;
            }
            printf("The result of squares three number is %.2f",a);
    }
