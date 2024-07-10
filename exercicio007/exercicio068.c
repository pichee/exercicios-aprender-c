//Faca uma funcao que receba duas strings e retorne a intercalacao letra a letra da primeira
//com a segunda string. A string intercalada deve ser retornada na primeira string.

//Make a function that receb two strings and return the interleave letter by letter.
#include <stdio.h>
#include <string.h>

    int funcao(char *str1,char *str2){
        int i=0,s1=strlen(str1),s2=strlen(str2);
        if(s1<s2);
        int aux=0;
        aux=s1;
        s1=s2;
        s2=aux;
        for(i=0;i<s1;i++){
            if(str1[i]!='\0'){
            printf("%c",str1[i]);
        }
           if(str2[i]!='\0'){
            printf("%c",str2[i]);
        }  
    }}
    int main(){
        char str1[100],str2[100];
        printf("Enter a string:");
        scanf("%99[^\n]",str1);
        getchar();
        printf("Enter a string:");
        scanf("%99[^\n]",str2);
        funcao(str1,str2);
    }
