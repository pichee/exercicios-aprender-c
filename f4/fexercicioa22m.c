//Faca um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.

//Make a program read two matrixs a and b and calculate c=a*b;
#include <stdio.h>
    int main(){
        int sa=0,sb=0,sc=0,a=0;
        int i=0;
        printf("matrix A\n");
        for ( i = 0; i < 9; i++)
        {
           printf("Enter a number:\n ");
           scanf("%i",&a);
           sa+=a;

        }
        printf("matrix B\n");
        for ( i = 0; i < 9; i++)
        {
           printf("Enter a number:\n ");
           scanf("%i",&a);
           sb+=a;

        }
        sc=sa*sb;
        printf("the value of C is %i",sc);
        

    }
