//Faca um programa que controla o consumo de energia dos eletrodomesticos de uma
//casa e:
//• Crie e leia 5 eletrodomesticos que contem nome (maximo 15 letras), potencia (real,
//em kW) e tempo ativo por dia (real, em horas).
//• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
//relativo de cada eletrodomestico (consumo/consumo total) nesse perıodo de tempo.
//Apresente este ultimo dado em porcentagem.

//Make a program the controler the energy consum
#include <stdio.h>
struct eletro
{
    char nome[5][16];
    float pote[5],tempo[5
    ];
    int d;
};
    int main(){
        struct eletro eletros;
        int a=0;
        float r[5];
        float total=0;
        for (a = 0; a < 5; a++)
        {
        printf("What is the household appliance:");
        scanf("%15[^\n]",eletros.nome[a]);
        getchar();
         printf("What is the consumption per hour:");
        scanf("%f",&eletros.pote[a]);
        printf("What is the time this machine stay on per day[In hours]:");
        scanf("%f",&eletros.tempo[a]);
        getchar();}

        printf("How many days do you want calculate:");
        scanf("%d",&eletros.d);
        a=0;
        for (a = 0; a < 5; a++)
        {
            r[a]=eletros.pote[a]*(eletros.tempo[a]*eletros.d);
            total+=r[a];
            
        }
        for (a = 0; a < 5; a++)
        {
            r[a]=r[a]/total;
            r[a]=r[a]*100;
            
        }
        printf("The consumption total is %.2f\n",total);
        for (a = 0; a < 5; a++)
        {
            printf("%s is igual %f porcent\n",eletros.nome[a],r[a]);
        }
        return 0;
        }
