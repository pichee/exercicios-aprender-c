//Leia duas cadeias de caracteres A e B. Determine quantas vezes a cadeia A ocorre na
//cadeia B.

//Read two strings and show how many times the A have in b
#include <stdio.h>

int main() {
    char v[100], v1[100];
    int count = 0;
    int len_v = 0, len_v1 = 0;
    
    printf("Enter the first string: ");
    scanf("%99[^\n]", v);
    getchar(); 
    
    printf("Enter the second string: ");
    scanf("%99[^\n]", v1);
    getchar(); 
    

    while (v[len_v] != '\0') {
        len_v++;
    }
    

    while (v1[len_v1] != '\0') {
        len_v1++;
    }


    for (int i = 0; i <= len_v1 - len_v; i++) {
        int j;
        for (j = 0; j < len_v; j++) {
            if (v1[i + j] != v[j]) {
                break;
            }
        }
        if (j == len_v) { 
            count++;
        }
    }

    printf("The string '%s' occurs %d times in the string '%s'.\n", v, count, v1);

    return 0;
}
