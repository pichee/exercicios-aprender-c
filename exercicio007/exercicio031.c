//Faca uma funcao para calcular o numero neperiano usando uma serie. A funcao deve
//ter como parametro o numero de termos que ser  ao somados (note que, quanto maior o 
//numero, mais proxima a resposta estar  a do valor;

//Make a function for calculate a number neperiano
#include <stdio.h>
int fatorial(int n, float guardar[]) {
    int aux = 1;
    float mult;
    while (aux <= n) {
        mult = 1;
        float fatorial = aux;
        while (fatorial >= 1) {
            mult *= fatorial;
            fatorial--;
        }
        guardar[aux - 1] = mult;
        aux++;
    }
    float r = 0.0;
    for (int i = 0; i < n; i++) {
        if (guardar[i] != 0) {
            r += 1.0 / guardar[i];
        }
    }
    printf("The result is %.2f\n", r);
}

int main() {
    int a = 0;
    printf("Enter a number: ");
    scanf("%i", &a);
    if (a <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    float c[a]; 
    int t = fatorial(a, c); 
}
