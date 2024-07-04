//Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
//prestacao for maior que 20% do salario imprima:Emprestimo nao concedido, caso
//contrario imprima:Emprestimo concedido.

//Read the salary of a employye and show if he can take a loan
//but for take a loan the value is maximum your salary more %20.
#include <stdio.h>
int main(){
    float s,e,a;
    printf("How much is your salary? ");
    scanf("%f",&s);
    printf("How much Do you need ");
    scanf("%f",&e);
    a=s+(s*0.2);
    if(a>e){
        printf("your loan going be accept");
    }
    else
    {
        printf("sorry but we cant your loan");
    }
}
