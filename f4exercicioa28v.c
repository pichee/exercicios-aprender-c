//Leia 10 numeros inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
//Copie os valores ımpares de v para v1, e os valores pares de v para v2. Note que cada
//um dos vetores v1 e v2 tem no maximo 10 elementos, mas nem todos os elementos sao
//utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.

//Read a vectore and stock in other vectore if the number will be pair or odd 
//after show.
#include <stdio.h>

int main() {
    int v[10], v1[10],v2[10], p = 0,o = 0;
    int a, j;

    for (a = 0; a < 10; a++) {
        printf("Enter a number: ");
        scanf("%i", &v[a]);
    if(v[a]%2==0){
        v1[p]=v[a];
        p++;
    }else{
        v2[o]=v[a];
        o++;
    }}
    for (a = 0; a < p; a++){
    printf("%i\n",v1[a]);}
    for (a = 0; a < o; a++){
    printf("%i\n",v2[a]);}
}
