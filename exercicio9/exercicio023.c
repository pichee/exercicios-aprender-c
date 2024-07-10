//Escreva uma funcao que retorna o maior valor de um array de tamanho N. Escreva um
//programa que leia N valores inteiros, imprima o array com k elementos por linha, e o
//maior elemento. O valor de k tambem deve ser fornecido pelo usuario.

//Make a function that return the bigger element thte array with n elements and showing the rest of array
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int funcao(int *ponteiro,int *line,int *maximo){
    int i=0,pula=1,maior;
    for (i = 0; i < *maximo; i++)
    {
        pula++;
        if (pula==*line)
        {
            printf("\n");
            pula=0;
        }
        *ponteiro=rand() % 100;
        printf("%i ",*ponteiro);
        if (*ponteiro>maior)
        {
            maior=*ponteiro;
        }
        
    }
    printf("\nThe bigger number is %i",maior);
    
}
int main(){
    int l,t;
    printf("Enter how much elements the array is:");
    scanf("%i",&t);
    printf("How elements do you want see line:");
    scanf("%i",&l);
    int v[t];
    funcao(v,&l,&t);
}
