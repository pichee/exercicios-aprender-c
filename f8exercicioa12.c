//Crie um programa que contenha uma funcao recursiva para encontrar o menor elemento
//em um vetor

//Make a program that showing the smaller element in a vector
#include <stdio.h>
    int ele(int m,int array[m]){
        int i=0;
        int menor=99999;
        while (i<m)
        {
            printf("Enter number:");
            scanf("%i",&array[i]);
            
            if (menor>array[i])
            {
                menor=array[i];
            }
            i++;
        }
        printf("The smaller element is %i",menor);
        
    }
    int main(){
        int a;
        printf("Enter how much numbers do you want in array:");
        scanf("%i",&a);
        int m[a];
        ele(a,m);
    }
