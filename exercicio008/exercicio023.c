//Faca uma funcao recursiva que permita somar os elementos de um vetor de inteiros. 

//Make a function that add all elements a vector
#include <stdio.h>
    int ele(int m,int array[m]){
        int i=0;
        while (i<m)
        {
            printf("Enter number:");
            scanf("%i",&array[i]);
            i++;
        }
        i=0;
    while (i<m)
    {
        printf("%i ",array[i]);
        i++;
    }
    }
    int main(){
        int a;
        printf("Enter how much numbers do you want in array:");
        scanf("%i",&a);
        int m[a];
        ele(a,m);
    }
//
#include <stdio.h>
    int ele(int m,int array[m]){
        int i=0;
        while (i<m)
        {
            printf("Enter number:");
            scanf("%i",&array[i]);
            i++;
        }
        i=0;
    while (i<m)
    {
        printf("%i ",array[i]);
        i++;
    }
    }
    int main(){
        int a;
        printf("Enter how much numbers do you want in array:");
        scanf("%i",&a);
        int m[a];
        ele(a,m);
    }

//Make a function show the elements a array
#include <stdio.h>
    int ele(int m,int array[m]){
        int i=0;
        while (i<m)
        {
            printf("Enter number:");
            scanf("%i",&array[i]);
            i++;
        }
        i=0;
        int s=0;
    while (i<m)
    {
        s=s+array[i];
        i++;
    }
    printf("The add is %i",s);
    }
    int main(){
        int a;
        printf("Enter how much numbers do you want in vector:");
        scanf("%i",&a);
        int m[a];
        ele(a,m);
    }
