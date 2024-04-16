//Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua
//distancia da origem ˆ (0, 0)
//Read  a program of read the coordinates  x and y and calculete your
//distance from the origin.
#include <stdio.h>
#include <math.h>
int main(){
    float o,x,y;
    printf("Enter the value of x ");
    scanf("%f",&x);
    printf("Enter the value of y ");
    scanf("%f",&y);
    o=(sqrt((x*x)+(y*y)));
    printf("distance from the origin %.2f",o);
}
