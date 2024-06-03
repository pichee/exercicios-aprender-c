//Crie uma funcao recursiva que receba dois inteiros positivos  k e n e calcule k

//Make a function that receb two numbers k and n and after calculate kn

#include <stdio.h>
    int  quadrado(int k,int i){
        if (k==0 || i==0)
        {
            printf("The result is 1");
            return 0;
        }
        int aux=1;
        while (aux<i)
        {
            k=k*k;
            aux++;
        }
        printf("The result is %i",k);         
    }
    int main(){
        int k,n;
        printf("Enter the first number:");
        scanf("%i",&k);
        printf("Enter the second number:");
        scanf("%i",&n);
        quadrado(k,n);
    }
