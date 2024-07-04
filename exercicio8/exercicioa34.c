////Faca uma funcao recursiva que permita inverter um numero inteiro N. Ex: 123 - 321:

//Make a function that invet the a int nnumber ex:123 -321;

#include <stdio.h>

int invertNumber(int n) {
    if (n < 10) {
        return n;
    } else {
        printf("%d", n % 10); // Imprime o último dígito
        return invertNumber(n / 10); // Chama a função recursivamente com o número restante
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Inverted number: ");
    if (number == 0) {
        printf("0"); // Caso especial para o número 0
    } else if (number < 0) {
        printf("-");
        number = -number;
        invertNumber(number); // Chama a função para inverter o número positivo
    } else {
        invertNumber(number); // Chama a função para inverter o número
    }
    
    printf("\n");
    
    return 0;
}
