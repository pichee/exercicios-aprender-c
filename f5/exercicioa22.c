//Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o
//desconto para pagamento a vista e de 10% sobre o valor total, calcular o valor a ser
//pago a vista. Escrever o nome da mercadoria, o valor total, o valor do desconto e o valor
//a ser pago a vista.

//Read a value of a merchandise and show the value the 10% discont and show the value final
#include <stdio.h>
    int main(){
        char m[31];
        float v,d,valod;
printf("What is the name of the merchandise:");
scanf("%30[^\n]",m);
getchar();
printf("What is value of %s:",m);
scanf("%f",&v);
d=(v*0.1);
valod=v-d;
printf("%s cost %.2f but with the %.2f discount the value stay in cash is %.2f",m,v,d,valod);
}
