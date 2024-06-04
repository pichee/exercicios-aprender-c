//Escreva uma funcao recursiva que calcule a sequencia dada por:
//F(1) = 1
//F(2) = 2
//F(n) = 2 * F(n-1) + 3 * F(n-2).

//Read a function that calculate the sequence:
//F(1) = 1
//F(2) = 2
//F(n) = 2 * F(n-1) + 3 * F(n-2).

#include <stdio.h>
int sequencia(int s){
    if (s==1)
    {
        printf("1");
        return 0;
    }
    if (s==2)
    {
        printf("2");
        return 0;
    }
    int i=3,r=3,b=3;
    for ( i = 3; i < s; i++)
    {
        b=3;
        for (b = 0; b <= i; b++)
        {
            r=r+(2*(i-1))+(3*(i-2));
        }
        
    }
    printf("%i",r);
    
};
int main(){
    int s;
    printf("Enter a number for sequence:");
    scanf("%i",&s);
    sequencia(s);
}
