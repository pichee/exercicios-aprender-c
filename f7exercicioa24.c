//Escreva uma funcao que gera um triangulo de altura e lados n e base 2*n-1. Por exem
//plo, a saıda para n = 6 seria:
///    *
//    ***
//   *****
//  *******
// *********
//***********

//Write a function that generates a triangle with height and sides n and base 2*n-1. For example
//plo, the said for n = 6 would be:
#include <stdio.h>
int funcao(int x,int n,int aux,int auxdoaux){
    aux=1;
    auxdoaux=3;
    while (aux<=n)
    {
        x=0;
        if(aux==1){
            printf("*");
            aux++;
            printf("\n");
        }else{
        
        while (x!=auxdoaux)
        {
            printf("*");
            x++;
            
        }
        auxdoaux+=2;
        printf("\n");
        aux++;
        }
    
        
    }
    
}
    int main(){
        int n,z,y,f;
        printf("Enter a number:");
        scanf("%i",&n);
        funcao(y,n,z,f);
    }
