//Ler uma sequencia de numeros inteiros e determinar se eles sao pares ou nao. Devera
//ser informado o numero de dados lidos e numero de valores pares. O processo termina
//quando for digitado o numero 1000.
//Read a sequencee until one thousand and show the numbeers in thw sequencee and the pairs numbers;
#include <stdio.h>
    int main(){
        int a,n,p,c,cp;
        printf("Enter a number until 1000\n");
        scanf("%i",&n);
        while(n<1000){
            p=n%2;
            if(p==0){
                cp++;
            }
           n++;
           c++;
        }
        printf("This number until 1000 is %i numbers and there is %i pairs numbers",c,cp);
    }
