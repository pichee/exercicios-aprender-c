//faça o jogo da velha

//make the hash game
#include <stdio.h>

int main() {
    int v[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int i = 0, j = 0, p = 0, w = 0, r1 = 0, r2 = 0, l = 0, c = 0, winner = 0,velha=0;

    printf("Hash game\n[0] show that you can put your number\n[1] houses the first user\n[2] houses the second user\n");

    while (w == 0 ||velha==9)  {
        printf("\n");
        for (i = 0; i < 3; i++) {
            p = 0;
            for (j = 0; j < 3; j++) {
                printf("%i ", v[i][j]);
                if (p == 2) {
                    printf("\n");
                } else {
                    p++;
                }
            }
        }

        r1 = 0;
        while (r1 == 0) {
            printf("User number 1\n");
            printf("Choose your line: ");
            scanf("%i", &l);
            printf("Choose your column: ");
            scanf("%i", &c);
            l = l - 1;
            c = c - 1;
            if (v[l][c] > 0) {
                printf("Sorry but this position is already taken\n");
            } else if (l < 0 || l > 2 || c < 0 || c > 2) {
                printf("Sorry but this is an invalid number\n");
            } else {
                v[l][c] = 1;
                r1 = 1;
                velha++;
            }
        }
        if ((v[0][0] == 1 && v[0][1] == 1 && v[0][2] == 1) ||
            (v[1][0] == 1 && v[1][1] == 1 && v[1][2] == 1) ||
            (v[2][0] == 1 && v[2][1] == 1 && v[2][2] == 1) ||
            (v[0][0] == 1 && v[1][0] == 1 && v[2][0] == 1) ||
            (v[0][1] == 1 && v[1][1] == 1 && v[2][1] == 1) ||
            (v[0][2] == 1 && v[1][2] == 1 && v[2][2] == 1) ||
            (v[0][0] == 1 && v[1][1] == 1 && v[2][2] == 1) ||
            (v[0][2] == 1 && v[1][1] == 1 && v[2][0] == 1)) {
            printf("Player 1 wins!\n");
            break;
            winner = 1;
            w = 1;
                                                            }

                                                    
    if(velha==9){
        break;
    }
        printf("\n");
        for (i = 0; i < 3; i++) {
            p = 0;
            for (j = 0; j < 3; j++) {
                printf("%i ", v[i][j]);
                if (p == 2) {
                    printf("\n");
                } else {
                    p++;
                }
            }
        }

        r2 = 0;
        while (r2 == 0) {
            printf("User number 2\n");
            printf("Choose your line: ");
            scanf("%i", &l);
            printf("Choose your column: ");
            scanf("%i", &c);
            l = l - 1;
            c = c - 1;
            if (v[l][c] > 0 || v[l][c] == 1) {
                printf("Sorry but this position is already taken\n");
            } else if (l < 0 || l > 2 || c < 0 || c > 2) {
                printf("Sorry but this is an invalid number\n");
            } else {
                v[l][c] = 2;
                r2 = 1;
                velha++;
            }
        }
        if ((v[0][0] == 2 && v[0][1] == 2 && v[0][2] == 2) ||
            (v[1][0] == 2 && v[1][1] == 2 && v[1][2] == 2) ||
            (v[2][0] == 2 && v[2][1] == 2 && v[2][2] == 2) ||
            (v[0][0] == 2 && v[1][0] == 2 && v[2][0] == 2) ||
            (v[0][1] == 2 && v[1][1] == 2 && v[2][1] == 2) ||
            (v[0][2] == 2 && v[1][2] == 2 && v[2][2] == 2) ||
            (v[0][0] == 2 && v[1][1] == 2 && v[2][2] == 2) ||
            (v[0][2] == 2 && v[1][1] == 2 && v[2][0] == 2)) {
            printf("Player 2 wins!\n");
            winner = 2;
            w = 1;
        }
    }
        printf("Hash game");
}
