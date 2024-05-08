//Entre com um nome e imprima o nome somente se a primeira letra do nome for ‘a’ (maiuscula ou minuscula).

//Read a name and if the letter a is the inicial showing.

#include <stdio.h>
    int main(){
        char v[30];
        printf("Enter a name\n");
        scanf("%30[^\n]",v);
        if(v[0]=='a'||v[0]=='A'){
            printf("%s",v);
        }else{
            printf("Thanks for the name");
        }
    }
