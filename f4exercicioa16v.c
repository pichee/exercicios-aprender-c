//Faca um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um
//codigo inteiro. Se o codigo for zero, finalize o programa; se for 1, mostre o vetor na ordem
//direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2
//escreva uma mensagem informando que o codigo e invalido.

//Make a vector read five numbers and after
//showing a frame with two options 
//number one if you want see the numbers in the crescent order
//number two if you want see the numbers in the decrescent order

#include <stdio.h>

    int main(){
        float v[5];
        int a,c,o=1;
        for(a=0;a<5;a++){
        printf("Enter a number");
        scanf("%f",&v[a]);
        }
        while (o==1)
        {
        
        printf("\nChoose a number\n1-crescent order\n2-decrescent order\n");
        scanf("%i",&c);
        if(c==1){
            for(a=0;a<5;a++){
                printf("%.2f\n",v[a]);
                o++;
            }
        }
        else if(c==2){
             for(a=4;a>-1;a--){
                printf("%.2f\n",v[a]);
                o++;
            }
        }
        else{
            printf("Invalid number");
        }}
    }
