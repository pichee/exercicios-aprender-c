//Dados tres valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo
//e, se forem, se e um triangulo escaleno, equilitero ou isoscele, considerando os seguin
//tes conceitos:
//• O comprimento de cada lado de um triangulo e menor do que a soma dos outros
//dois lados.
//• Chama-se equilatero o triangulo que tem tres lados iguais.
//• Denominam-se isosceles o triangulo que tem o comprimento de dois lados iguais.
//• Recebe o nome de escaleno o triangulo que tem os tres lados diferentes.

//Given three values, A, B, C, check if they can be the lengths of the sides of a triangle and, if they are, whether it is a scalene, equilateral, or isosceles triangle, considering the following concepts:

//The length of each side of a triangle is less than the sum of the other two sides.
//A triangle is called equilateral if it has three equal sides.
//A triangle is called isosceles if it has the length of two sides equal.
//A triangle is called scalene if it has three different sides.
#include <stdio.h>
    int main(){
        float n,n1,n2,a,b,c;
        printf("Enter a number\n");
        scanf("%f",&n);
        printf("Enter other number\n");
        scanf("%f",&n1);
        printf("Enter other number\n");
        scanf("%f",&n2);
        a=n+n1;
        b=n+n2;
        c=n1+n2;
        if(a>n2 && b>n1 && c>n){
            if(a==b && a==c){
                printf("This is a equilateral triangle");
            }
            if((a == b && a != c) || (a == c && a != b) || (b == c && c != a)){
                printf("This is a isosceles triangle ");
            }
            if(a!=b && a!=c && b!=c){
                printf("This is a scalene triangle");
            }
        }
        else{
            printf("This cant form a triangle");
        }

    }
