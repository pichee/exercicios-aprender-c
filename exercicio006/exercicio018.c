//Faca um programa que gerencie o estoque de um mercado e:
//• Crie e leia um vetor de 5 produtos, com os dados: codigo (inteiro), nome (maximo 
//15 letras), preco e quantidade.
//• Leia um pedido, composto por um codigo de produto e a quantidade. Localize 
//este codigo no vetor e, se houver quantidade suficiente para atender ao pedido 
//integralmente, atualize o estoque e informe o usuario. Repita este processo ate ler
//um codigo igual a zero.

//verify a stock and see if the product have the quantiy if the cod is 0 end the program
#include <stdio.h>
struct cod
{
    char nome[5][16];
    int pote[5],quanti[5];
    float price[5];
    int d;
};
    int main(){
        struct cod cod;
        int a=0,po=0,aux=0;
        for (a = 0; a < 5; a++)
        {
        printf("Name the product");
        scanf("%15[^\n]",cod.nome[a]);
        getchar();
         printf("Code de product(can't be zero):");
        scanf("%i",&cod.pote[a]);
        printf("Quantity:");
        scanf("%i",&cod.quanti[a]);
        printf("What is the price:");
        scanf("%f",&cod.price[a]);
        getchar();
        }
        while (aux==0)
        {
        a=0;
        printf("What code the product do you want:");
        scanf("%i",&po); 
        if (po==0)
            {
            return 0;
            }
        for ( a = 0; a < 5; a++)
        {
         
            if(po==cod.pote[a]){
                printf("How quantity do you want:");
                int quanti=0;
                scanf("%i",&quanti);
                if(quanti>cod.quanti[a]){
                    printf("ERROR:");
                }else{
                    cod.quanti[a]=cod.quanti[a]-quanti;
                    printf ("the new quantiy");
                    a=0;
                    for(a = 0; a < 5; a++){
                        printf("%s have %i",cod.nome[a],cod.quanti[a]);
                    }
                }

            }  
        }
        }
        
        
        
        }
