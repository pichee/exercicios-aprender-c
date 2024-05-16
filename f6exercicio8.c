// Faca um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionario de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, ´
//Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de
//ate 30 caracteres) e Salario. Os dados devem ser digitados pelo usuario, armazenados
//na estrutura e exibidos na tela.

//Make a program read a lot informations the one user;

#include <stdio.h>

struct dados {
    char name[30];
    int old;
    char sexo;
    int nascimento[3];
    int code;
    char cargo[31];
    float salary;
};

int main() {
    struct dados dados;
    int a = 0;

    printf("Enter your name: ");
    scanf(" %29[^\n]", dados.name);
    getchar(); 

    printf("How old are you: ");
    scanf("%d", &dados.old);
    getchar(); 

    while (a == 0) {
        printf("You are male or female [M/F]: ");
        scanf(" %c", &dados.sexo);
        getchar(); 

        if (dados.sexo == 'm' || dados.sexo == 'M' || dados.sexo == 'f' || dados.sexo == 'F') {
            a = 1;
        } else {
            printf("Invalid input. Please enter 'M' for male or 'F' for female.\n");
        }
    }

    printf("What day were you born: ");
    scanf("%d", &dados.nascimento[0]);
    getchar(); 

    printf("What month were you born: ");
    scanf("%d", &dados.nascimento[1]);
    getchar(); 

    printf("What year were you born: ");
    scanf("%d", &dados.nascimento[2]);
    getchar(); 

    printf("What is your sector code: ");
    scanf("%d", &dados.code);
    getchar(); 

    printf("What do you do: ");
    scanf(" %30[^\n]", dados.cargo);
    getchar(); 

    printf("What is your salary: ");
    scanf("%f", &dados.salary);


    printf("\nDados fornecidos:\n");
    printf("Nome: %s\n", dados.name);
    printf("Idade: %d\n", dados.old);
    printf("Sexo: %c\n", dados.sexo);
    printf("Data de nascimento: %02d/%02d/%04d\n", dados.nascimento[0], dados.nascimento[1], dados.nascimento[2]);
    printf("Código do setor: %d\n", dados.code);
    printf("Cargo: %s\n", dados.cargo);
    printf("Salário: %.2f\n", dados.salary);

    return 0;
}

    }
 
