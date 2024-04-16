//Faca um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
//versa. Voce deve criar um menu com as duas opcoes de conversao e com uma opcao
//para finalizar o programa. O usuario podera fazer quantas conversoes desejar, sendo
//que o programa so ser  a finalizado quando a opcao de finalizar for escolhida.

//Create an algorithm that converts a speed expressed in km/h to m/s and vice versa. You should create a menu with the two
//conversion options and an option to terminate the program. 
//The user can make as many conversions as desired, and the program 
//will only terminate when the option to finish is chosen.
#include <stdio.h>
int main(){
    float c,km,ms;
    char a='y';
    while (a=='y' || a=='Y')
    {
      
    
    printf("\nDo you want tranform m/s for km/h [1]\nOur do you want transform km/h for m/s[2]\n");
    scanf("%f",&c);
    if(c==1){
        printf("Enter your km/h ");
        scanf("%f",&km);
        ms=km/3.6;
        printf("this equivalent a %f m/s",ms);
    }
    else if(c==2){
        printf("Enter your m/s ");
        scanf("%f",&ms);
        km=ms*3.6;
        printf("this equivalent a %f km",km);

    }
    else{
        printf("trying again something is wrong");
    }
        printf("\ndo you want transform other speed?[Y/N]");
        scanf(" %c", &a);
    }
}
