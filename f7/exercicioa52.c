#include <stdio.h>
void matrixs(int r, int n[r][r]) {
    int a, i;
    for (a = 0; a < r; a++) {
        for (i = 0; i < r; i++) {
            printf("Enter a number: ");
            scanf("%d", &n[a][i]);
        }
    }

    printf("Your transposed matrix is:\n");
    for (i = 0; i < r; i++) {
        for (a = 0; a < r; a++) {
            printf("%d ", n[a][i]);
        }
        printf("\n");
    }
}

int main() {
    int r;
    printf("Enter how many lines and columns you want: ");
    scanf("%d", &r);
    if (r <= 0) {
        printf("The number of lines and columns must be greater than 0.\n");
    }

    int v[r][r];
    matrixs(r, v);

}
