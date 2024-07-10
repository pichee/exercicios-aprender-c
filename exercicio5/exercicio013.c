// Ler uma frase e contar quantos caracteres sao espacos em brancos. Lembre-se que
//uma frase e um conjunto de caracteres (vetor).

//Cont how much space the phrase have

#include <stdio.h>
    int main(){
        char v[100];
        int c=0,a=0;
        printf("Enter a phrase:");
        scanf("%99[^\n]",v);
        while(a<100){
            if(v[a]==' '){
                c++;
            }
            a++;
        }
        printf("there is %i spaces",c);
    }
