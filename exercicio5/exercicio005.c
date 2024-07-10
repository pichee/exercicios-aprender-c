//Digite um nome, calcule e retorne quantas letras tem esse nome.

//Enter a name and show how letters the name is

#include <stdio.h>
    int main(){
        char v[40];
        int c=0,i=0;
        printf("Enter a name\n");
        scanf("%40[^\n]",v);
        for (i = 0; v[i]!='\0'; i++)
        {
            if (v[i]==' ')
            {
            
            }
            else{            
                c++;
            }}
      printf("This name has %i letters ",c);  
    }
