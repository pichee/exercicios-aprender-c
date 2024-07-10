//Faca uma funcao que receba a distancia em  Km e a quantidade de litros de gasolina
//consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
//mensagem de acordo com a tabela abaixo:
//CONSUMO (Km/l) MENSAGEM
//menor que 8 Venda o carro!
//entre 8 e 12 Economico!
//maior que 12 Super economico!

//Make a function receb the litter and the km the a car and show if it is
//smaller 8 sold the car
//8 betwen 12 economic
//bigger than 12 very economic

#include <stdio.h>
    int economia(float km,float l){
        km=km/l;
        if(km<8){
            printf("Sold the car");
        }
        if(km>=8 && km<=12){
            printf("Economic");
        }
        if(km>12){
            printf("Very economic");
        }

    }
    int main(){
        float km=0,l=0;
        printf("How much km do your car make:");
        scanf("%f",&km);
        printf("How much litters by km:");
        scanf("%f",&l);
        economia(km,l);
    }
