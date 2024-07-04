//Crie uma funcao que calcula o comprimento de uma string e que possui a seguinte
//assinatura: void tamanho(char *str, int *strsize).

//Make a function that calculate the size a string needs tell(char *str, int *strsize)
#include <stdio.h>
 void tamanho(char *str, int *strsize){
    printf("%s have %i the size",str,strsize);
 }
 int main(){
    char p[100];
    printf("Enter a string:");
    scanf("%99[^\n]",p);
    int tam= strlen(p);
    tamanho(p,tam);
 }
