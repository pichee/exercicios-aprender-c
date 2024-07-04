//Uma empresa contrata um encanador a R$ 30,00 por dia. Faca um programa que solicite
//o numero de dias trabalhados pelo encanador e imprima a quantia lıquida que devera ser
//paga, sabendo-se que sao descontados 8% para imposto de renda.
//a company hire a plumber  for  R$ 30,00 each day.Make a program what request
//the number the eork days for plumberr and show amount  lıquid he receved´
//know 8% is discont because the tax.
#include <stdio.h>
    int main(){
        float d;
        printf("How many days the plumber work? ");
        scanf("%f",&d);
        d=d*30;
        d=d-(d*0.08);
        printf("He going receive approximately  %.2f Reais",d);
    }
