//Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu
//naipe e seu valor) ou tipo “super trunfo” (cada carta possui um conjunto de atributos).
//Implemente a parte de distribuic¸ao (sorteio) de cartas para 2 jogadores, considerando ˜
//que cada jogador ira receber 5 cartas. Exiba na tela as cartas que cada um dos jogadores ´
//recebeu.

//Chosse a card game and show how cards the two players receb(five cards);
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    srand(time(NULL));
    char escreve[10];
    char ve[5][10];
    int v[5],a;
    for (a = 0; a < 5; a++)
    {
    int naipe =rand() %5;
    int number=rand() %13;
    if (naipe==1){
        strcpy(escreve, "SPADES");
    }
    if (naipe==2){
        strcpy(escreve, "HEARTS");
    }
    if (naipe==3){
        strcpy(escreve, "CLUBS");
    }
    if (naipe==4){
        strcpy(escreve, "DIAMONDS");
    }
    v[a]=number;
    strcpy(ve[a], escreve);
   }
    printf("Cards Player 1\n");
    for (a = 0; a < 5; a++)
    {
        printf("Number:%i Suit:%s\n",v[a],ve[a]);
    }
    a=0;
    for (a = 0; a < 5; a++)
    {
    int naipe =rand() %5;
    int number=rand() %13;
    if (naipe==1){
        strcpy(escreve, "SPADES");
    }
    if (naipe==2){
        strcpy(escreve, "HEARTS");
    }
    if (naipe==3){
        strcpy(escreve, "CLUBS");
    }
    if (naipe==4){
        strcpy(escreve, "DIAMONDS");
    }
    v[a]=number;
    strcpy(ve[a], escreve);
   }
    printf("Cards Player 2\n");
    for (a = 0; a < 5; a++)
    {
        printf("Number:%i Suit:%s\n",v[a],ve[a]);
    }
}
