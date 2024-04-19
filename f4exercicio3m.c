//Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das
//componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem
//10 elementos cada. Imprimir todos os conjuntos.

//Read a vector float numbers and calculate the squarle them,put in other vector and show
//OBS each conjunt have ten elements:

#include <stdio.h>
int main(){
    float v[10];
    float v1[10];
    int a=0;
    for(a=0;a<10;a++){
        printf("Enter a number:");
        scanf("%f",&v[a]);
        v1[a]=v[a]*v[a];
    }
    a=0;
    while (a<10)
    {
        printf("The squarle of %.2f is %.2f\n",v[a],v1[a]);
        a++;
    }
}
