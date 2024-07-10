//Faca uma funcao recursiva que receba um numero N e retorne o N-esimo termo da
//sequencia de Padovan. A sequencia de Padovan  e uma sequencia de naturais P(n) de
//finida pelos valores iniciais
//P(0) = P(1) = p(2) = 1
//e a seguinte relac¸ao recursiva
//P(n) = P(n - 2) + P(n - 3) se n > 3
//Alguns valores da sequencia sao: 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28...

//Make a function that the user choice a number and you show the sequence the padovan
#include <stdio.h>
    int funcao(int s){
        if (s==0)
        {
            printf("ERROR");
            return 0;
        }
        if (s==1)
        {
            printf("1");
            return 0;
        }
        if (s==2)
        {
            printf("1");
            return 0;
        }
        if (s==3)
        {
            printf("1");
            return 0;
        }
        int i=3,v[s],b=3,c=3,aux=i;
        v[0]=1;
        v[1]=1;
        v[2]=1;

        for (i = 3; i < s; i++)
        {
            c=aux-2;
            b=aux-3;
            v[i]=v[b]+v[c];
            aux++;
        }
        i=i-1;
        printf("The result is %i",v[i]);
        
    }
    
    int main(){
        int s;
        printf("Enter a number:");
        scanf("%i",&s);
        funcao (s);
    }
