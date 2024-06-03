//Escreva uma funcao recursiva que calcule a soma dos primeiros n cubos:

//Make a function than calculate the N cubes:

#include <stdio.h>
int cubo(int n){
    int i=0,r=0;
    if (n<0)
    {
        printf("Invalid number");
        return 0;
    }
    else if (n==0)
    {
        printf("1");
        return 0;
    }
    else{
    
    
    while (i<=n)
    {
       r=r+(i*i*i);
       i++;
    }
    printf("The add is %i",r);
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%i",&n);
    cubo(n);
}
