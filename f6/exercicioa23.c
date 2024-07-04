//Escreva um programa que receba dois structs do tipo dma, cada um representando uma
//data valida, e calcule o numero de dias que decorreram entre as duas datas
//struct dma {
//int dia;
//int mes;
//int ano;
//};

//Make two datas and stope when the stay igual
#include <stdio.h>
    struct dma{
      int dia;
      int mes;
      int ano;
    };
    struct dma1{
      int dia1;
      int mes1;
      int ano1;
    };
int main(){
    struct dma dma;
    struct dma1 dma1;
    int aux,c=0;
    printf("Enter a day:");
    scanf("%i",&dma.dia);
    printf("Enter a month:");
    scanf("%i",&dma.mes);
    printf("Enter a year:");
    scanf("%i",&dma.ano);
    printf("Enter a  other day:");
    scanf("%i",&dma1.dia1);
    printf("Enter a other month:");
    scanf("%i",&dma1.mes1);
    printf("Enter a other year:");
    scanf("%i",&dma1.ano1);
   if(dma.ano>dma1.ano1){
            aux=dma1.ano1;
            dma.ano=dma1.ano1;
            dma1.ano1=aux;
            aux=dma1.mes1;
            dma.mes=dma1.mes1;
            dma1.mes1=aux;
            aux=dma1.dia1;
            dma.dia=dma1.dia1;
            dma1.dia1=aux;
   }
        while(dma.ano!=dma1.ano1 || dma.mes!=dma1.mes1 || dma.dia!=dma1.dia1)
        {
        
        if(dma.dia>30){
            dma.dia=0;
            dma.mes++;
        }
        if(dma.mes>12){
            dma.mes=0;
            dma.ano++;
        }
        dma.dia++;
        c++;
        }
            
        
    printf("%i",c);}
    
