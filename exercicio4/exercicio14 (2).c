//Faca um programa para gerar automaticamente numeros entre 0 e 99 de uma cartela de
//bingo. Sabendo que cada cartela devera conter 5 linhas de 5 numeros, gere estes dados
//de modo a nao ter numeros repetidos dentro das cartelas. O programa deve exibir na
//tela a cartela gerada

//Make a card bingo andh show in the frame

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[5][5];
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int num;
            do {
                num = rand() % 99 + 1; 
                
                v[i][j] = num;
                for (int k = 0; k < i; k++) {
                    for (int l = 0; l < 5; l++) {
                        if (v[k][l] == num) {
                            num = 0;
                            break;
                        }
                    }
                    if (num == 0) break;
                }
            } while (num == 0);
        }
    }

    
    printf("This is your card bingo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%i ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}
