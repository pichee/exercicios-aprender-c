//Escreva uma funcao que compare e retorne verdadeiro, caso uma string seja anagrama
//da outra, e falso, caso contrario.

//Make a function that return a function true if a string is a anagrama or false if contrary

#include <stdio.h>
#include <string.h>
    int falso(char vai[]){
        int i=0,b=0,a=strlen(vai);
        if (vai[1]=='\0')
        {
            printf("This can't be a anagrama:");
        }
        for ( i = 0; i < a; i++)
        {
            for (b = 0; b < a; b++)
            {
               if (vai[i]!=vai[b])
            {
                printf("This can be a anagrama");
                return 0;
            }
            
            }
        }
        printf("This can't be a anagrama");
        
    }
    int main(){
        char palavra[100];
        printf("Enter some word:");
        scanf("%99[^\n]",palavra);
        falso(palavra);
    }
