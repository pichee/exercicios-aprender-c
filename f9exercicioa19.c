//Escreva uma funcao que aceita como parametro um array de inteiros com N valores, e
//determina o maior elemento do array e o numero de vezes que este elemento ocorreu
//no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
//8, 6, 15, a funcao deve retorna para o programa que a chamou o valor 15 e o numero 3

//Make a function that accept a array with n values ans showing the bigger element and how many times he was found

#include <stdio.h>
    int funcao(int *vetor,int numero){
        int i=0;
        for (i = 0; i < numero; i++)
        {
            printf("Enter the value:");
            int value;
            scanf("%i",&value);
            vetor[i]=value;
        }
        int contador=0,maior=vetor[0];
        for (i = 0; i < numero; i++) {
        if (vetor[i] == maior) {
            contador++;
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
            contador = 1;
        }}
        printf("the maior value is %i and it is found %i times",maior,contador);
    }
    int main(){
        int n;
        printf("How many numbers are the vector?");
        scanf("%i",&n);
        int v[n];
        funcao(&v[n],n);
    }
