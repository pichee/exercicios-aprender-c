//Make a menu that read what do you want and the quantity
//This is the menu
//Name code Price
//Cachorro Quente 100 1.20
//Bauru Simples 101 1.30
//Bauru com Ovo 102 1.50
//Hamburguer 103 1.20
//Cheeseburguer 104 1.70
//Suco 105 2.20
//Refrigerante 106 1.00
#include <stdio.h>
int main(){
    char l;
    float q,a;
    int w;
    l='y';
    printf("Chose what do you want eat\n");
    printf("\n---------------------------\n");
    printf("Name          ||Code||Value\nHot Dog       ||100 ||01.20\nSimple Bauru  ||101 ||1.30\nBauro with Egg||102 ||1.50\nHamburguer    ||103 ||1.20\nChesse Burguer||103 ||1.70\nJuice         ||105 ||2.20\nSoda          ||106 ||1.00");
    while(l=='y'||l=='Y'){
    printf("\nPlease Enter the code what do you want(Just One code)\n");
    scanf("%i",&w);
    printf("what is the quantity?\n");
    scanf("%f",&q);
    w=w-99;
    switch(w){
        case 1:
        a=q*1.20+a;
        break;
        case 2:
        a=q*1.30+a;
        break;
        case 3:
        a=q*1.50+a;
        break;
        case 4:
        a=q*1.20+a;
        break;
        case 5:
        a=q*1.70+a;
        break;
        case 6:
        a=q*2.20+a;
        break;
        case 7:
        a=q*1.00+a;
        break;
    }
    printf("Do you want something else [Y/N]?\n");
    scanf(" %c",&l);
    
}
    printf("You need pay %.2f",a);
    
}
