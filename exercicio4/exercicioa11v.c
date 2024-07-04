//Faca um programa que preencha um vetor com 10 numeros reais, calcule e mostre a
//quantidade de numeros negativos e a soma dos numeros positivos desse vetor.

//Make a vector read ten float numbers reals and calculate abd show how much
//negative numbers there is and the addicion by positive numbers.
#include <stdio.h>
int main(){
    float v[10];
    float q=0,s=0;
    int a;
    for(a=0;a<10;a++){
        printf("Enter a number:\n");
        scanf("%f",&v[a]);
        if(v[a]>=0){
            s+=v[a];
        }
        else{
            q+=1;
        }
    }
    printf("This vector has %.0f negative numbers and the add of the positive numbers is %.2f",q,s);
}
