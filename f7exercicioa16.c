//Faca uma func¸ao chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando
//varios sımbolos de igual (Ex: ========). A funcao recebe por parametro quantos sinais
//de igual serao mostrados.

//Make a function it must draw a line in the frame = and the user deecidee how much =
#include <stdio.h>
    int desenha(int a,int b){
        for(b=0;b<a;b++){
            printf("=");
        }
    }
    int main(){
        int a=0,b=0;
        printf("Choose a number bigger than 0:");
        scanf("%i",&a);
        desenha(a,b);
    }
