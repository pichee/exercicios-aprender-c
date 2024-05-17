//Fac¸a um programa que controle o fluxo de voos nos aeroportos de um paıs. Com V = 5
//(voos) e  A = 5 (aeroportos) e:
//• Crie e leia um vetor de voos, sendo que cada voo contem um codigo de aeroporto
//de origem e um de destino.
//• Crie um vetor de aeroportos, sendo que cada aeroporto contem seu codigo, quanti
//dade de voos que saem e quantidade de voos que chegam.
//Nota: Cada aeroporto e identificado por um codigo inteiro entre 0 e ( ´ A-1). Nao aceite
//aeroportos de codigo inexistente.

//Control de airports
#include <stdio.h>

int main() {
    const int NUM_FLIGHTS = 5;
    const int NUM_AIRPORTS = 5;

    
    struct Flight {
        int origin;
        int destination;
    };


    struct Airport {
        int code;
        int flightsDepart;
        int flightsArrive;
    };

    struct Flight flights[NUM_FLIGHTS];
    struct Airport airports[NUM_AIRPORTS];
    int i, j;

   
    for (i = 0; i < NUM_AIRPORTS; i++) {
        airports[i].code = i + 1;  // Airport codes from 1 to NUM_AIRPORTS
        airports[i].flightsDepart = 0;
        airports[i].flightsArrive = 0;
    }


    for (i = 0; i < NUM_FLIGHTS; i++) {
        printf("Enter the origin airport code for flight %d: ", i + 1);
        scanf("%d", &flights[i].origin);
        printf("Enter the destination airport code for flight %d: ", i + 1);
        scanf("%d", &flights[i].destination);
    }


    for (i = 0; i < NUM_FLIGHTS; i++) {
        for (j = 0; j < NUM_AIRPORTS; j++) {
            if (flights[i].origin == airports[j].code) {
                airports[j].flightsDepart++;
            }
            if (flights[i].destination == airports[j].code) {
                airports[j].flightsArrive++;
            }
        }
    }


    printf("\nFlight flow at airports:\n");
    for (i = 0; i < NUM_AIRPORTS; i++) {
        printf("Airport %d: %d flights depart, %d flights arrive\n", 
               airports[i].code, 
               airports[i].flightsDepart, 
               airports[i].flightsArrive);
    }

    return 0;
}
