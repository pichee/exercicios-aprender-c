//Uma empresa decide dar um aumento aos seus funcionarios de acordo com uma tabela 
//que considera o salario atual e o tempo de servico de cada funcionario. Os funcionarios
//com menor salario terao um aumento proporcionalmente maior do que os funcionarios
//com um salario maior, e conforme o tempo de servico na empresa, cada funcionario ir a
//receber um bonus adicional de salario. Faca um programa que leia:
//• o valor do salario atual do funcionario;
//• o tempo de servico desse funcionario na empresa (numero de anos de trabalho na
//empresa).

//verify the salary of the employee and how many yeears he has in the company,next
//using the frame for increase your salarys
//SALARY ´ READJUSTMENT(%) WORK TIME Bonus ˆ
//until 500,00 ´ 25% smaller to  1 year no bonus ˆ
//until 1000,00 ´ 20%  1 between 3 years 100,00
//until 1500,00 ´ 15%  4 between 6 years 200,00
//until 2000,00 ´ 10%  7 beetween 10 years 300,00
//above 2000,00 no readjustmente more than 10 years 500,00

#include <stdio.h>

int main()
{
    float s;
    int y;
    printf("How much is your salary\n");
    scanf("%f",&s);
    printf("How many years do you work in this company\n");
    scanf("%i",&y);
    if (s<=500){
        s=s+(s*0.25);
    }else if(s>500&&s<=1000){
       s=s+(s*0.20); 
    }else if(s>1000&&s<=1500){
       s=s+(s*0.15); 
    }else if(s>1500&&s<=2000){
       s=s+(s*0.10); 
    }
    if(y<1){
        printf("Your salary is now %.2f",s);
    }else if(y>1&&y<=3){
        s=s+100;
        printf("Your salary is now %.2f",s);
    }else if(y>4&&y<=6){
        s=s+200;
        printf("Your salary is now %.2f",s);
    }else if(y>7&&y<=10){
        s=s+300;
        printf("Your salary is now %.2f",s);
    }else{
        s=s+400;
        printf("Your salary is now %.2f",s);
    }
}
