//Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros. 
//O programa deve executar os seguintes passos:
//(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
//(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes
//A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
//(c) Modifique o vetor na posicao 4, atribuindo a esta posicao o valor 100.
//(d) Mostre na tela cada valor do vetor A, um em cada linha.

//Make a program that have a vector and give it stock 6 whole numbers
//Step by step the program:
//(a) vector star with this numbes: 1, 0, 5, -2, -5, 7.
//(b) ADD A0 A1 A5 and show the somation
//(c) modifict the vector  4, your new number is 100.
//(d) Show the values of the vector line by line.

#include <stdio.h>
int main(){
    int v[6]={1,0,5,-2,-5,7};
    int s=v[0]+v[1]+v[5];
    int a;
    printf("A Soma dos vetores 0,1 e 5 e %i\n",s);
    v[3]=100;
    for(a=0;a<6;a++){
        printf("%i\n",v[a]);
    }
}
