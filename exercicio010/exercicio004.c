//Faca um programa que receba do usuario o tamanho de uma string e chame uma
//funcao para alocar dinamicamente essa string. Em seguida, o usuario devera informar o
//conteudo dessa string. O programa imprime a string sem suas vogais.

//Make a function that receb a string and after showing but withou the vogals
#include <stdio.h>
#include <stdlib.h>
int funcao(int size){
    char *con=(char *)malloc(size* sizeof(char));
    if (con == NULL) {
        printf("Error allocating memory\n");
        return 0;
    }
    printf("Enter what do you want:");
    getchar();
    fgets(con,size,stdin);
    int i=0;
    for (i = 0; i < size; i++)
    {
        if(con[i]=='a'||con[i]=='e'||con[i]=='i'||con[i]=='o'||con[i]=='u'){

        }
        else
        {
            printf("%c",con[i]);
        }
    }
    free(con);
    return 0;


}
int main(){
    int size;
    printf("How many letters you string do you want:");
    scanf("%i",&size);
    funcao(size+1);
}