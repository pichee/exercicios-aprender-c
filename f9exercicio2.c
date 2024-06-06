//Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
//exiba o maior endereco.

//Read two variays that cont two int.compare your adress and the bigger adres:
#include <stdio.h>
int main(){
    int n1,n2;
    int *ponteiro1=&n1;
    int *ponteiro2=&n2;
    if (ponteiro1>ponteiro2)
    {
        printf("the bigger number is:%i\n",ponteiro1);
    }else{
         printf("the bigger number is:%i\n",ponteiro2);
    }
}
