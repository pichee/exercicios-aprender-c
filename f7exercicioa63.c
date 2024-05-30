//Crie uma funcao que compara duas strings e que retorna se elas sao iguais ou diferentes

//Make a function compare two strings and return if ther are iguals or differents.

#include <stdio.h>
#include <string.h>
int funcao(char *l,char *l1){
            if (strcmp(l,l1)==0)
            {
              printf("This strings are iguals");
              return 0;  
            }else{
                printf("This strings are differents");
                return 0;
            }
            
        }
    int main(){
        char a[100],b[100];
        printf("Enter something:");
        scanf("%99[^\n]",a);
        getchar();
        printf("Enter other thing:");
        scanf("%99[^\n]",b);
        funcao(a,b);
    }
