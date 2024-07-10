//Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
//de um banco e retorne quantas notas de cada valor serao necessarias para atender ao
//saque com a menor quantidade de notas poss´ıvel. Serao utilizadas notas de 100, 50,
//20, 10, 5, 2 e 1 real.

//Write a program that receives as input the value of the withdrawal made by the customer
//from a bank and returns how many notes of each denomination will be required to fulfill the
//withdrawal with the smallest possible number of notes. Notes of 100, 50,
//20, 10, 5, 2, and 1 real will be used.
int main() {
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor %= 100;
    notas50 = valor / 50;
    valor %= 50;
    notas20 = valor / 20;
    valor %= 20;
    notas10 = valor / 10;
    valor %= 10;
    notas5 = valor / 5;
    valor %= 5;
    notas2 = valor / 2;
    valor %= 2;
    notas1 = valor;

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}
