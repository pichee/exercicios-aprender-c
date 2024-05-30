//Implemente a funcao a qual recebe duas strings, str1 e str2, e concatena a string apontada por str2 a string apontada por str1.

//Make a function receb two strings str1 and str2 and concatenate the string pointed out str 2 the string pointed out str1

#include <stdio.h>
#include <string.h>
#include <conio.h>
int string(char *str1,char *str2){
    int i=0,a=0,l=0,l1=0;
    i=strlen(str1);
    a=strlen(str2);
    int aux=a;
    while (getchar() != '\n');
    while (a==aux)
    {
        printf("How many letters do you want the string 1:");
        scanf("%i",&l);
        if(l>i){
            printf("Please select a number valid until %i:\n",i);
           while (getchar() != '\n');
        }else{
            break;
        }
    }
    getchar();
    while (a==aux)
    {
        printf("How many letters do you want the string 2:");
        scanf("%i",&l1);
        if(l1>a){
            printf("Please select a number valid until %i:\n",a);
            while (getchar() != '\n');
        }else{
            break;
        }
    }
    int t=0;
    while (t<l)
    {
    printf("%c",str1[t]);
    t++;
    }
    t=0;
    while (t<l1)
    {
    printf("%c",str2[t]);
    t++;
    }
    t=0;
    
    
}
    int main(){
        char n[100],n1[100];
        printf("Enter a string:");
        scanf("%99[^\n]",n);
        getchar();
        printf("Enter other string:");
        scanf("%99[^\n]",n1);
        string(n,n1);
    }
