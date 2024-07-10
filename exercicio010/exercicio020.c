//Faca um programa que:
//(a) Peca para o usuario entrar com o nome e a posicao (coordenadas X e Y) de N
//cidades e as armazene em um vetor de estruturas (N e informado pelo usuario);
//(b) Crie uma matriz de distancias entre cidades de tamanho N x N;
//(c) Calcule as distancia entre cada duas cidades e armazene na matriz;
//(d) Exiba na tela a matriz de distancias obtida;

//Make a program that verify the location the citys
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    char name[50];
    int x;
    int y;
} City;

double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int n, i, j;

    printf("Enter the number of cities: ");
    scanf("%d", &n);


    City *cities = (City *)malloc(n * sizeof(City));

    for (i = 0; i < n; i++) {
        printf("Enter the name of city %d: ", i + 1);
        scanf("%s", cities[i].name);
        printf("Enter the X coordinate of %s: ", cities[i].name);
        scanf("%d", &cities[i].x);
        printf("Enter the Y coordinate of %s: ", cities[i].name);
        scanf("%d", &cities[i].y);
    }

    // Allocate memory for the distance matri
double **distanceMatrix = (double **)malloc(n * sizeof(double *));
    for (i = 0; i < n; i++) {
        distanceMatrix[i] = (double *)malloc(n * sizeof(double));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                distanceMatrix[i][j] = 0.0; // Distance from a city to itself is 0
            } else {
                distanceMatrix[i][j] = calculateDistance(cities[i].x, cities[i].y, cities[j].x, cities[j].y);
            }
        }
    }

    printf("\nDistance Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%8.2f ", distanceMatrix[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (i = 0; i < n; i++) {
        free(distanceMatrix[i]);
    }
    free(distanceMatrix);
    free(cities);

    return 0;
}
