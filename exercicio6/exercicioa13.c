//Peca ao usuario para digitar seus dados pessoais (Nome, Enderec¸o, Data de Nasci
//mento, Cidade, CEP, email), verifique se as informacoes de Data de Nascimento, CEP
//e email fazem sentido, e mostre ao usuario as informacoes, se estao todas corretas, ou
//mostre que alguma informacao estava errada.

//Ask the user to enter their personal data (Name, Address, Date of Birth
//ment, City, ZIP code, email), check if the information on Date of Birth, ZIP code
//e email makes sense, and shows the user the information, whether it is all correct, or
//show that some information was wrong.


#include <stdio.h>
#include <string.h>

struct inf {
    char name[31], end[31], city[31], cep[9], gmail[31];
    int born, born1, born2;
};

int main() {
    struct inf inf;

    printf("Enter your name: ");
    scanf("%30[^\n]", inf.name);
    getchar();
    printf("Enter your address: ");
    scanf("%30[^\n]", inf.end);
    getchar();
    printf("Enter your city: ");
    scanf("%30[^\n]", inf.city);
    getchar();
    printf("Enter the day you were born: ");
    scanf("%i", &inf.born);
    printf("Enter the month you were born: ");
    scanf("%i", &inf.born1);
    printf("Enter the year you were born: ");
    scanf("%i", &inf.born2);
    getchar();
    printf("Enter your email: ");
    scanf("%30[^\n]", inf.gmail);
    getchar();
    printf("Enter your CEP: ");
    scanf("%8[^\n]", inf.cep);
    getchar();

    printf("\n--- User Information ---\n");
    printf("Name: %s\n", inf.name);
    printf("Address: %s\n", inf.end);
    printf("City: %s\n", inf.city);
    printf("Date of Birth: %02d/%02d/%04d\n", inf.born, inf.born1, inf.born2);
    printf("Email: %s\n", inf.gmail);
    printf("CEP: %s\n", inf.cep);

    // Verifica se o CEP tem 8 dígitos
    if (strlen(inf.cep) != 8) {
        printf("Invalid CEP!\n");
    }

    // Verifica se o email contém '@'
    if (!strchr(inf.gmail, '@')) {
        printf("Invalid email!\n");
    }

    return 0;
}
