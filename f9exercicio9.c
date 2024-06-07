//Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
//Imprima o endereco de cada posicao dessa matriz. 

//Make a program that show the adress the a vector 

#include <stdio.h>
int main(){
    int i=0,vetor[3][3],b=0;
    for(i=0;i<10;i++){
        b=0;
        for ( b = 0; b < 3; b++)
        {
          int *ponteiro=&vetor[i][b];
        printf("%i\n",ponteiro);  
        }
        
        
    }
}
