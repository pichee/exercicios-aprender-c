//Construa um programa que leia duas strings fornecidas pelo usuario e verifique se a se
//gunda string lida esta contida no final da primeira, retornando o resultado da verificacao.

//Make a program read two strings and verify if the second is contained in the first;
#include <stdio.h>

int main() {
    int a = 0;
    char v[200], v1[200]; 
    printf("Enter the first string: ");
    scanf("%199[^\n]", v);
    getchar(); 
    printf("Enter the second string: ");
    scanf("%199[^\n]", v1);
    printf("Enter how many characters the second string will have: ");
    scanf("%i", &a);
    getchar();
    v1[a]='\0';
    printf("%s%s\n", v, v1);
}
