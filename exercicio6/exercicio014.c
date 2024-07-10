//Faca um programa que leia um vetor com os dados de 5 carros: marca (maximo 15 
//letras), ano e preco. Leia um valor p e mostre as informacoes de todos os carros com
//preco menor que p. Repita este processo ate que seja lido um valor p = 0.

//Verify if the user can be pay this car

#include <stdio.h>
#include <string.h>
struct carro
{
    char mar[5][31];
    int year;
    float price;
};
int main(){
    struct carro carro;
    int p=0,a=0,year[5];
    float pr=0;
    float prices[5];
    char car[5][31];
    printf("How much do you want pay:");
    scanf("%f",&pr);
    getchar();
    for ( a = 0; a < 5; a++)
    {
        printf("What the name the car:");
        scanf("%30[^\n]",carro.mar[a]);
        printf("What is your price: ");
        scanf("%f",&carro.price);
        printf("What is the year this car:");
        scanf("%i",&carro.year);
        if (pr>=carro.price)
        {
            strcpy(car[p], carro.mar[a]);
            year[p]=carro.year;
            prices[p]=carro.price;
            p++;
        }
        getchar();
        
    }
    a=0;
    if (p>=1)
    {
        printf("This is the options:\n");
        for ( a = 0; a < p; a++)
        {
            printf("Name:%s\nYear:%i\nPrice:%.2f\n",car[a],year[a],prices[a]);
        }
    }else{
            printf("We can't a car like the price you want");
        }
    
    }


