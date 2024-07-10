//Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
//possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS
//8%). Faca um programa em que o usuario entre com o valor e o estado destino do
//produto e o programa retorne o preco final do produto acrescido do imposto do estado
//em que ele sera vendido. Se o estado digitado nao for valido, mostrar uma mensagem de erro.

// Put the value the product 
//dependes the city you will increase the value the product
//Because the tax see the frame
//to MG 7% SP 12% RJ 15% MS 8%
#include <stdio.h>
    int main(){
        int c;
        float v;
        printf("What city you will take your products\n1-MG\n2-SP\n3-RJ\n4-MS\n-----------\n");
        scanf("%i",&c);
        printf("Put the value of your product\n");
        scanf("%f",&v);
        if (c<=4){
            switch(c){
                case 1:
                v=v+(v*0.07);
                printf("Due the tax you will your product will be sold by %.2f",v);
                break;
                case 2:
                v=v+(v*0.12);
                printf("Due the tax you will your product will be sold by %.2f",v);
                break;
                case 3:
                v=v+(v*0.15);
                printf("Due the tax you will your product will be sold by %.2f",v);
                break;
                case 4:
                v=v+(v*0.08);
                printf("Due the tax you will your product will be sold by %.2f",v);
                break;
                    }}else{
                        printf("ERROR");
                    }
        }
