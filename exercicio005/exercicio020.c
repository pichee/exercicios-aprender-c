//Faca um programa que preencha uma matriz de string com os modelos de cinco carros
//(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o
//consumo desses carros, isto e, quantos quilometros cada um deles faz com um litro de
//combustıvel. Calcule e mostre:
//(a) O modelo de carro mais economicos
//(b) Quantos litros de combustıvel cada um dos carros cadastrados consome para percorrer uma distancia de 1.000 quilometros.

//Create a program that fills a string matrix with the models of five cars (examples of models: Fusca, Gol, Vectra, etc.). Then, fill a vector with the fuel consumption of these cars, i.e., how many kilometers each of them travels with one liter of fuel. Calculate and show:
//(a) The most fuel-efficient car model
//(b) How many liters of fuel each of the registered cars consumes to travel a distance of 1,000 kilometers.

#include <stdio.h>
    int main(){
        char car[5][30];
        float kml[5];
        int a=0,e=0,mais=0;
        for(a=0;a<5;a++){
            printf("Enter a name the car:");
            scanf("%30[^\n]",car[a]);
            getchar();
        }
        a=0;
        for(a=0;a<5;a++){
            printf("How much the %s make for litter:\n",car[a]);
            scanf("%f",&kml[a]);
            getchar();
            if(kml[a]>e){
                e=kml[a];
                mais=a;
            }
        }
        printf("The car more economic is %s",car[mais]);
        for (a = 0; a < 5; a++)
        {
            kml[a]=1000\kml[a];
            printf("the %s in a distance the 1000 km make %.2f at all\n",car[a],kml[a]);
        }
        


    }
