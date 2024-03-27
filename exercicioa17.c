//7. Leia um valor de comprimento em cent´ımetros e apresente-o convertido em polegadas.
//A formula de convers ´ ao˜ e: ´ P =C/2,54 , sendo C o comprimento em cent´ımetros e P o comprimento em polegadas.
#include <stdio.h>
int main(){
    float c,p;
    printf("digite seu valor em centimetros ");
    scanf("%f",&c);
    p=c/2.54;
    printf("Esse valor convertido em polegadas é igual a %.2f",p);
}
