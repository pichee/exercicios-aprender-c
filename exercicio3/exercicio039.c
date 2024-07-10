//Faca um programa que calcule a area de um triangulo, cuja base e altura sao fornecidas
//pelo usuario. Esse programa nao pode permitir a entrada de dados invalidos, ou seja,
//medidas menores ou iguais a 0.

//calculate the other value the triangule,know the height and the base
#include <stdio.h>
       int main(){
                int h,b,s;
                printf("Enter  the height of  triangule");
                scanf("%i",&h);
                printf("Enter the base the triangule");
                scanf("%i",&b);
                h=h*h;
                b=b*b;
                s=h+b;
printf("the other slide should be %i",s);
       }
