//Faca uma rotina que receba como parametro um vetor de caracteres e seu tamanho.
//A funcao dever  a de ler uma string do teclado, caractere por caractere usando a funcao
//getchar() ate que o usuario digite enter ou o tamanho maximo do vetor seja alcancado.

//Make a routine receb with parameter a vector the caracteres and your size.
//the function must read a string in keyboard,caractere by caractere using a funcition getchar until the
//user click enter or the vector maximo be alcansed.
#include <stdio.h>
    int fucao(char *size,int a){
        printf("Enter what do you want until %i:",a);
        scanf("%s",size);
        int i=0;
        for ( i = 0; i < a; i++)
        {
            printf("%c",size[i]);
        }
        

    }
    int main(){
        int a=0;
        printf("Enter the size max:");
        scanf("%i",&a);
        char size[a];
        fucao(size,a);
    }
