//Receb the salary in employeed. Calculet and show the salary for receb,know
//if the employeed  receved increase 5% abou the inciail salary.furthermore, ´
//he pay 7% tax  about your inciail salary.
#include <stdio.h>
    int main(){
        float s;
        printf("How many is the salary");
        scanf("%f",&s);
        s=s+(s*0.05);
        s=(s*0.07);
        printf("He needs paying %.2f Dollars of tax",s);
    }
