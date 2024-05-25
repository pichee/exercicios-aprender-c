//Faca uma funcao que receba como parametro o valor de um  angulo em graus e calcule
//o valor do cosseno desse angulo usando sua respectiva serie de Taylor:cos x para todo x,
//onde x e o valor do  angulo em radianos. Considerar ˆ π = 3.141593 e n variando de 0
//ate 5.
//Make a function caluculate de cosseno with the serial taylor.
#include <stdio.h>
#include <math.h>
#define PI 3.141593
int factorial(int num) {
    int k, result = 1;
    for (k = 1; k <= num; k++) {
        result *= k;
    }
    return result;
}
float calculate_sine(float rad) {
    int i;
    float sine = 0.0;
    for (i = 0; i <= 5; i++) {
        int sign = (i % 2 == 0) ? 1 : -1;
        sine += sign * pow(rad, 2 * i + 1) / factorial(2 * i + 1);
    }
    return sine;
}
int main() {
    float angleDegrees;
    printf("Enter an angle in degrees: ");
    scanf("%f", &angleDegrees);
    float angleRadians = angleDegrees * (PI / 180.0);
    float sine = calculate_sine(angleRadians);
    printf("The cosseno of %.2f degrees is approximately %.2f\n", angleDegrees, sine);
