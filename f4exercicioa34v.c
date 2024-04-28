//Faca um programa para ler 10 numeros DIFERENTES a serem armazenados em um 
//vetor. Os dados deverao ser armazenados no vetor na ordem que forem sendo lidos,
//sendo que caso o usuario digite um numero que ja foi digitado anteriormente, o programa
//devera pedir para ele digitar outro numero. Note que cada valor digitado pelo usuario
//deve ser pesquisado no vetor, verificando se ele existe entre os numeros que ja foram 
//  fornecidos. Exibir na tela o vetor final que foi digitado

//Show in the frame a vectore without repeat numbers

#include <stdio.h>

int main() {
    int a=0, v[15],t=15,p=0,vo[15],rep,i;
    while(a<15){
        printf("Enter a number: ");
        scanf("%i", &v[a]);
            rep=0;
            for(p=0;p<a;p++){
                if(v[a]==v[p]){
                    printf("Not enter a number repeat\n");
                    rep=1;
                    break;
                }
            }
            if(!rep){
                    a++;
                }
    }
            for ( i = 0; i < 15; i++)
            {
                printf("%i\n",v[i]);
            }
            }
