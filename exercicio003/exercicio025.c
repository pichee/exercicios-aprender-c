//Faca um programa que some todos os numeros naturais abaixo de 1000 que s ´ ao m ˜ ultiplos ´
//de 3 ou 5.
//Addition divisors 3 and 5 until 1000;
#include <stdio.h>
int main(){
    int n=1000,a=1,d,s=0,d1;
    while(a<n){
        d=a%3;
        d1=a%5;
        if(d==0||d1==0){
            s=s+a;
        }
        
        a++;
    }
    printf("The addition of your divisirors is %i",s);
}
