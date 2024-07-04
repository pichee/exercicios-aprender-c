//Faca uma funcao recursiva que receba um numero N e retorne o N-esimo termo da
//sequencia de tetranacci. Os numeros tetranacci iniciam com quatro termos pre-determinados
//e a partir daı todos os demais numeros sao obtidos pela soma dos quatro numeros ante
//riores. Os primeiros numeros tetranacci sao: 0, 0, 0, 1, 1, 2, 4, 8, 15, 29, 56, 108, 208

//The user choice how number the sequence the tetranacci he want see and you need showing
#include <stdio.h>
    int tetra(int n){
        if (n==1)
        {
            printf("0");
            return 0;
        }
        if (n==2)
        {
            printf("0");
            return 0;
        }
        if (n==3)
        {
            printf("0");
            return 0;
        }
        if (n==4)
        {
            printf("1");
            return 0;
        }
        if (n==5)
        {
            printf("1");
            return 0;
        }
        if (n==6)
        {
            printf("2");
            return 0;
        }
        if (n==7)
        {
            printf("4");
            return 0;
        }
    int um=4,dois=2,tres=1,quatro=1,aux=0,i=7,r=0;
    for (i = 7; i < n; i++)
    {
        r=um+dois+tres+quatro;
        quatro=tres;
        tres=dois;
        dois=um;
        um=r;
    }
    printf("%i",r);

    }
    int main(){
        int s=0;
        printf("Enter how number do you want:");
        scanf("%i",&s);
        tetra(s);
    }
