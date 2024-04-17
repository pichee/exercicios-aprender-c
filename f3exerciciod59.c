//Escreva um programa que leia o numero de habitantes de uma determinada cidade, o
//valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mes
//e o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o
//maior, o menor e a media do consumo dos habitantes; e por fim o total do consumo de
//cada categoria de consumidor

//Write a program that reads the number of inhabitants of a certain city, the value of kWh, 
//and for each inhabitant enter the following data:
// monthly consumption and the consumer code (1-Residential, 2-Commercial, 3-Industrial).
// Finally, print the largest, the smallest, and the average consumption of the inhabitants; 
//and finally, the total consumption of each consumer category."


#include <stdio.h>

int main() {
    int h,a=1,a1;
    float kw,c=0,re=0,co=0,in,st=0,m=0,me=9999999;
        printf("How many habitants there are:\n");
        scanf("%i",&h);
        printf("How much is the price of kwh:\n");
        scanf("%f",&kw);
        while(a<=h){
            a1=4;

            printf("Please enter the consumpion the habitant %i\n",a);
            scanf("%f",&c);
            a++;
            while(a1>3||a1<1){
            printf("What is your consumer code\n1-Resindetial\n2-Commercial\n3-Industrial\n");
            scanf("%i",&a1);
            if(a1>3||a1<1){
                printf("You Enter a invallid consumer code try again");
            }
            if(a1>m){
                m=a1;
            }
            if(a1<me){
                me=a1;
            }
            if(a1==1){
                re+=c;
            }
            if(a1==2){
                co+=c;
            }
            if(a1==3){
                in+=c;
            }}
            st+=c;
            }
        printf("The bigger consumpion is %.2f\n",m);
         printf("The smaller consumpion is %.2f\n",me);
         st=st/h;
          printf("The media consumpion is %.2f\n",st);
          printf("consume total\nResindetial %.2f\nCommercial %.2f\nIndustrial %.2f",re,co,in);
}
