//Leia o salario de um funcionario. Calcule e imprima o valor do novo salario, sabendo que
//ele recebeu um aumento de 25%.

//Read the salary from a employee. Calculate and show the new salary value,know what
//he receb a incresea of 25%.
#include <stdio.h>
    int main(){
        float s;
        printf("How much is your salary ");
        scanf("%f",&s);
        s=s+(s*0.25);
        printf("Your new salary is %2.f",s);
        
    }
