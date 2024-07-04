//Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6
//numeros do seu bilhete. O programa entao compara quantos numeros o jogador acertou.
//Em seguida, ele aloca espaco para um vetor de tamanho igual a quantidade de numeros
//corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os
//numeros sorteados e os seus numeros corretos.

//Make a lottery
#include <stdio.h>
int main(){
    int i=0;
    int b=0,s[6],y[6];
    for (i = 0; i < 6; i++)
    {
        printf("Enter the %i number drawn:\n",i+1);
        scanf("%i",&s[i]);
    }
    
    i=0;
    for (i = 0; i < 6; i++)
    {
        printf("Enter the %i  your number:\n",i+1);
        scanf("%i",&y[i]);
    }
    i=0;
    b=0;
    int c=0;
    for (i = 0; i < 6; i++)
    {
        b=0;
        for ( b = 0; b < 6; i++)
        {
            if (s[i]==y[b])
            {
                c++;
            }
            
        }
    }
    printf("You accert %i numbers",c);
    
} 
