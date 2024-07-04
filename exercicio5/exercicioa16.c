//Leia uma cadeia de caracteres e converta todos os caracteres para maiuscula.Dica:
//subtraia 32 dos caracteres cujo codigo ASCII esta entre 97 e 122.

//Read the caracteres and covenrt all the caracteres for uppercase letters
#include <stdio.h>
    int main(){
        char v[100];
        int i=0;
        printf("Enter something:");
        scanf("%99[^\n]", v);
        while (i<100){
            if(v[i]>='a' && v[i]<='z'){
                v[i]-=32;
            }
            i++;
        }
        printf("%s", v);
    }
