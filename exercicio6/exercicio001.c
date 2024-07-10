//Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados conforme
//solicitado abaixo:
//• Horario: composto de hora, minutos e segundos.
//• Data: composto de dia, mes e ano.
//• Compromisso: composto de uma data, horario e texto que descreve o compromisso

//Read a struct show the how time is it the data and the apointment
#include <stdio.h>
struct agenda
{
    int hora;
    int minuto;
    int segundo;
    int dia;
    int mes;
    int ano;
    char compromisso[100];
};

    int main(){
        int a=0;
        struct agenda agenda;
        printf("what time is your apointment(Just hours):");
        scanf("%i",&agenda.hora);
        printf("what time is your apointment(Just minutes):");
        scanf("%i",&agenda.minuto);
        printf("what time is your apointment(Just seconds):");
        scanf("%i",&agenda.segundo);
        while (a==0)
        {  
        if(agenda.segundo>=60){
            agenda.segundo=agenda.segundo-60;
            agenda.minuto++;
        }else{
            break;
        }}
        while (a==0)
        {  
        if(agenda.minuto>=60){
            agenda.minuto=agenda.minuto-60;
            agenda.hora++;
        }else{
            break;
        }}
         while (a==0)
        {  
        if(agenda.hora>24){
            agenda.hora=agenda.hora-24;
        }else{
            break;
        }}
        while (a==0)
        {
            printf("what day is :");
            scanf("%i",&agenda.dia);
            if(agenda.dia>31){
                printf("Trying again\n");
            }else{
                break;
            }
        }
        while (a==0)
        {
            printf("what month is :");
            scanf("%i",&agenda.mes);
            if(agenda.mes>12){
                printf("Trying again\n");
            }else{
                break;
            }
        }
        while (a==0)
        {
            printf("what year is :");
            scanf("%i",&agenda.ano);
           a++;
        }
        getchar();
         printf("what is your  apointment:");
         scanf("%99[^\n]",agenda.compromisso);
         printf("\nYou have a complish %i/%i/%i at %i:%i:%i and is %s",agenda.dia,agenda.mes,agenda.ano,agenda.hora,agenda.minuto,agenda.segundo,agenda.compromisso);
    }
