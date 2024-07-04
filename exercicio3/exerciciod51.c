//Um funcionario recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
//recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao
//dobro do ano anterior. Faca programa que determine o salario atual do funcionario. 

//An employee receives annual raises. In 1995, he was hired for 2000 reais.
//In 1996, he received a 1.5% raise. Starting in 1997, raises always correspond to double the previous year's.
//Create a program to determine the current salary of the employee.
int main() {
    int ano = 1996;
    float salario = 2000;
    float aumento;

    while (ano <= 2024) {
        aumento = salario * 0.015;
        salario += aumento;
        printf("Salário em %d: R$ %.2f\n", ano, salario);
        aumento *= 2; 
        ano++;
    }}
