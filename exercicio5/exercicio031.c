//Faca um programa que contenha um menu com as seguintes opcoes:
//(a) Ler uma string S1 (tamanho maximo 20 caracteres);X
//(b) Imprimir o tamanho da string S1;X
//(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o
//resultado da comparacao;X
//(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da
//concatenacao;X
//(e) Imprimir a string S1 de forma reversa;X
//(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere
//desse ser informado pelo usuario;X
//(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os
//caracteres C1 e C2 serao lidos pelo usuario;X

//Create a program that contains a menu with the following options:
//(a) Read a string S1 (maximum size 20 characters);
//(b) Print the size of string S1;
//(c) Compare string S1 with a new string S2 provided by the user and print the result of the comparison;
//(d) Concatenate string S1 with a new string S2 and print the concatenation result on the screen;
//(e) Print string S1 in reverse order;
//(f) Count how many times a given character appears in string S1. This character should be informed by the user;
//(g) Replace the first occurrence of character C1 in string S1 with character C2. Characters C1 and C2 will be read by the user.


#include <stdio.h>
    int main(){
        char s1[21];
        char s2[21];
        char ca,cb;
        int a=0,c=0,c1=0;
        printf("Enter a string(max 20 characters):");
        scanf("%21[^\n]",s1);
        getchar();
        while(s1[a]!='\0'){
            c++;
            a++;
        }
        a=0;
        printf("the string 1 have %i characters\n",c);
        printf("Enter other string(max 20 chacarcters):");
        scanf("%21[^\n]",s2);
        while (s2[a]!='\0')
        {
            c1++;
            a++;
        }
        printf("the string 1 have %i characters and the string 2 have %i\n",c,c1);
        printf("%s%s\n",s1,s2);
        while (c>=0)
        {
            printf("%c",s1[c]);
            c--;
        }
        getchar();
        printf("\nHow character do you want know:");
        scanf(" %c",&ca);
        a=0;
        int contador=0;
        while (s1[a]!='\0')
        {
            if(s1[a]==ca){
                contador++;
            }
            a++;
        }
        a=0;
        printf("This letter it's found %i times\n",contador);
        printf("What letter do you chance");
        getchar();
        scanf(" %c",&ca);
        getchar();
        printf("What letter do you want");
        scanf(" %c",&cb);
        while (s1[a]!='\0')
        {
            if(s1[a]==ca){
                s1[a]=cb;
            }
            a++;
        }
        printf("%s",s1);



    }
