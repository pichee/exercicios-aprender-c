//Chico tem 1.50 metro e cresce 2 centımetros por ano, enquanto Ze tem 1.10 metros e
//cresce 3 centımetros por ano. Escreva um programa que calcule e imprima quantos anos
//serao necessarios para que Ze seja maior que Chico.

//chico has 1.50 meters and grow up 0.02cm by day
//ze has 1.10 meters and grow up 0.03 cm by day
//how many days ze will be bigger than chico
int main(){
    float tc=1.50;
    float tz=1.1,y=0;
    while (tz<tc)
    {
        tz=tz+0.03;
        tc=tc+0.02;
        y++;
        }
    printf("It will take %.0f years for ze be more taller than chico",y);
    printf("%f %f",tz,tc);
    }
