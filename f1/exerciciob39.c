//A importancia de R$ 780.000,00 ser a dividida entre tres ganhadores de um concurso.
//Sendo que da quantia total:
//• O primeiro ganhador recebera 46%;
//• O segundo recebera 32%;
//• O terceiro recebera o restante;
//Calcule e imprima a quantia ganha por cada um dos ganhadores
//R$ 780.000,00 going be divid among three winners  of a contest;
//• The first winner will receive 46%; 
//• The second winner will receive 32%; 
//• The third winner will receive the rest;
//Calculete and show the how much receive each winner;

#include <stdio.h>
    int main(){
        int total=780000;
        float d,w1,w2,w3;
        w1=780000*0.46;
        w2=780000*0.32;
        w3=780000-w1-w2;
        printf("the first winner won %.2f\n the second %.2f\n and the third %.2f\n",w1,w2,w3);
        
    }
