//Sejam a e b os catetos de um triangulo, onde a hipotenusa e obtida pela equacao:
//hipotenusa =√a2 + b2. Faca um programa que receba os valores de a e b e calcule
//o valor da hipotenusa atraves da equacao. Imprima o resultado dessa operacao.


//Be a and b  peccariesde of a  triangle,where hypotenuse and obtained for equation:
//√a2 + b2.Make a program what receive  the  values  a and b so calculete
//the value  from peccariesde.Show the result this operation.
#include <stdio.h>
#include <math.h>
    int main(){
        float a,b;
        double c;
        printf("What is the value the a ");
        scanf("%f",&a);
        printf("What is the value the b ");
        scanf("%f",&b);
        c=sqrt((a*a)+(b*b));
        printf("the peccariesde is igual %.2f",c);
        }
