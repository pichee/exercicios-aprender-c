//Faca um programa que leia o valor da hora de trabalho (em reais) e numero de horas
//trabalhadas no mes. Imprima o valor a ser pago ao funcionario, adicionando 10% sobre
//o valor calculado.

//Make a program in read the value in hours work(in Reais) and de number worked hours in the mouth.
//Show the value being paid out the employee,add 10% about the value calculate.
#include <stdio.h>
int main(){
    float p,h,w;
    printf("How many is the value work per hour(Reais)");
    scanf("%f",&h);
    printf("How many hours the employee worked");
    scanf("%f",&w);
    p=(h*w)+(h*w)*(0.1);
    printf("The value the employee will receve is %.2f",p);
    
    
}
