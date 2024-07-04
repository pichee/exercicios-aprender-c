//O codigo de Cesar  e uma das mais simples e conhecidas tecnicas de criptografia.  E um
//tipo de substituicao na qual cada letra do texto  e substituıda por outra, que se apresenta
//no alfabeto abaixo dela um numero fixo de vezes. Por exemplo, com uma troca de tres
//posicoes, ‘A’ seria substituıdo por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente
//um programa que faca uso desse Codigo de Cesar (3 posicoes), entre com uma string e
//retorne a string codificada. Exemplo:
//String: a ligeira raposa marrom saltou sobre o cachorro cansado
//Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR

//Make a program code the sifra the Cesar
#include <stdio.h>
    int main(){
        char v[100];
        int a=0;
        printf("Enter a phrase:");
        scanf("%99[^\n]",v);
        while(v[a]!='\0'){
            if(v[a]>'a'&&v[a]<'z'){
                v[a]=v[a]-32;
            }
            v[a]=v[a]+3;
            if(v[a]=='z' || v[a]=='Z'){
                v[a]='C';
            }else if(v[a]=='x' || v[a]=='X'){
                v[a]='B';
            }else if(v[a]=='y' || v[a]=='Y'){
                v[a]='A';
            }
            a++;
        }
        printf("%s",v);
    }
