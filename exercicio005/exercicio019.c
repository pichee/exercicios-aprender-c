////Escreva um programa que leia a idade e o primeiro nome de 10 pessoas. Seu programa
//deve terminar quando uma idade negativa for digitada. Ao terminar, seu programa deve
//escrever o nome e a idade das pessoas mais jovens e mais velhas.

//Read ten numbers and your old and you need wrinting the old of the person more old and more new
#include <stdio.h>

int main() {
    char v[10][31];
    int old[10];
    int a = 0, coringamenor = 0, coringamaior = 0, menor = 0, tudocerto = 0;
    printf("Enter a name: ");
    scanf("%30[^\n]", v[a]);
    getchar();
    printf("How old %s have? ", v[a]);
    scanf("%i", &old[a]);
    getchar();
    menor = old[a];
    int m = old[a];
    if (old[a] < 0) {
        a = 9;
    } else {
        tudocerto++;
    }
    while (a < 9) {
        printf("Enter a name: ");
        scanf("%30[^\n]", v[a]);
        getchar();
        printf("How old  %s have? ", v[a]);
        scanf("%i", &old[a]);
        getchar();
        if (old[a] < 0) {
            a = 9;
        } else if (old[a] < menor) {
            coringamenor = a;
            menor = old[a];
        } else if (old[a] > m) {
            coringamaior = a;
            m = old[a];
        }
        a++;
    }
    if (tudocerto == 9) {
        printf("%s is the person more old with %i years.\n", v[coringamaior], m);
        printf("%s is the person more new with %i years.\n", v[coringamenor], menor);
    } else {
        printf("Please trying again\n");
    }
}
