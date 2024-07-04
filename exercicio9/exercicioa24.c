//Escreva uma funcao que receba um array de inteiros V e os enderecos de duas variaveis
//inteiras, min e max, e armazene nessas variaveis o valor mınimo e maximo do array.
//Escreva tambem uma funcao main que use essa funcao.

//Read a function and showing the bigger and the smaller value the array with N elements
#include <stdio.h>
    int funcao(int *vetor,int *maximo,int *minimo,int *maior)
    {
        int i=0;
        for (i = 0; i < *maximo; i++)
        {
            printf("Enter a number");
            scanf("%i",&*vetor);
            if (*vetor>*maior)
            {
                *maior=*vetor;
            }
            if (*vetor<*minimo)
            {
                *minimo=*vetor;
            }
            
            
        }
        printf("the bigger value is %i and the smaller is %i",*maior,*minimo);
    
    }
    int main(){
        int s;
        printf("How many numbers do you want in your array:");
        scanf("%i",&s);
        int v[s],mini=999,maior=-999;
        funcao(v,&s,&mini,&maior);
    }
