//Faca um programa que receba 6 numeros inteiros e mostre:
//• Os numeros pares digitados;
//• A soma dos numeros pares digitados; ´
//• Os numeros ımpares digitados;
//• A quantidade de numeros ımpares digitados(fiz os numeros impares digitados tambem);

//Make a program receb 6 numbers and show
//the pairs numbers
//the add pair numbers
//the odd numberss
//the adition by odd numbers
#include <stdio.h>

int main() {
    int v[10], v1[10],v2[10], p = 0,o = 0,sp=0,si=0;
    int a, j;

    for (a = 0; a < 10; a++) {
        printf("Enter a number: ");
        scanf("%i", &v[a]);
    if(v[a]%2==0){
        v1[p]=v[a];
        sp+=v[a];
        p++;
    }else{
        v2[o]=v[a];
        si+=v[a];
        o++;
    }}
    for (a = 0; a < p; a++){
    printf("%i\n",v1[a]);}
    printf("the add of numbers pairs is %i\n",sp);
    for (a = 0; a < o; a++){
    printf("%i\n",v2[a]);}
    printf("The add of odd numbers is %i",si);
}
