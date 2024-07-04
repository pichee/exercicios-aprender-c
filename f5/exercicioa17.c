//Leia um vetor contendo letras de uma frase inclusive os espac¸os em branco. Retirar os
//espacos em branco do vetor e depois escrever o vetor resultante.

//Read a string have letters in one phrase and remove the spaces after
//showing the string

#include <stdio.h>
    int main(){
        char v[100];
        int a=0;
        printf("Enter a phrase:");
        scanf("%99[^\n]", v);
        while(a<100){
            if(v[a]==' '){
                v[a]="/0";
            }
            a++;
        }
        printf("%s",v);
    }
