//Leia a distancia em Km e a quantidade de litros de gasolina consumidos por um carro
//em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com
//a tabela abaixo

//show if your car is economic
//smaller 8 is not so good
//until 12 is economic
//bigger 12 is execelent
#include <stdio.h>
int main ()
{
    float k;
    printf ("How many kilometers does your car make per liter?\n");
    scanf("%f",&k);
    if(k<8){
        printf("Your car is not so good");
    }
    if(k>=8 && k<12){
        printf("Your car is economic");
    }
    if(k>=12){
        printf("Your car is execelent");
    }
}
