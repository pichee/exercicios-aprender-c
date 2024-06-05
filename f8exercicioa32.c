//Dado um numero n na base decimal, escreva uma funcao recursiva que converte este
//numero para binario.

//convert a number in binary
#include <stdio.h>
int bina(int n){
    int v[32],i=0;
    for (i = 0; n>1; i++)
    {
        if (n%2==0)
        {
            v[i]=0;
        }
        else{
            v[i]=1;
        }
        n=n/2;
    }
    v[i] = n;
    while (i!=0)
    {
        printf("%i",v[--i]);
    }
}
    int main(){
        int n;
        printf("Enter a number:");
        scanf("%i",&n);
        bina(n);
    }
