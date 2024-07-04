//Faca um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2

//Make a program read the matrix a and calculate b=B2
#include <stdio.h>
    int main(){
        int sa=0,a=0;
        int i=0;
        printf("matrix A\n");
        for ( i = 0; i < 9; i++)
        {
           printf("Enter a number:\n ");
           scanf("%i",&a);
           sa+=a;

        }
        sa=sa*sa;
        printf("the value of B is %i",sa);
        

    }
