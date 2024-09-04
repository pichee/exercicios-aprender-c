//Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e
//exiba o maior endereco.
//Read two variays that cont two int.compare your adress and the bigger adres:
#include <stdio.h>
int main(){
    int n1,n2;
    int *ponteiro1=&n1;
    int *ponteiro2=&n2;
    printf("Digite o valor do primeiro numero:");
    scanf("%i",&n1);
   printf("Digite o valor do segundo numero:");
    scanf("%i",&n2);
    if (ponteiro1>ponteiro2)
    {
        printf("O maior endereço de memória é %i pertence ao número %i\nE o menor endereço é %i pertence ao numero %i",ponteiro1,*ponteiro1,ponteiro2,*ponteiro2);
    }else{
        printf("O maior endereço de memória é %i pertence ao número %i\nE o menor endereço é %i pertence ao numero %i",ponteiro2,*ponteiro2,ponteiro1,*ponteiro1);
 
    }
}