//Fac¸a um programa que leia um numero inteiro positivo de tr ´ es d ˆ ´ıgitos (de 100 a 999).
//Gere outro numero formado pelos d ´ ´ıgitos invertidos do numero lido.
#include <stdio.h>
    int main(){
        float n,n2,n3,n1;
        printf("Digite um numero de 100 a 999 ");
        scanf("%f",&n);
           if((n >= 100) && (n <= 999))
            {
                n3=((int)(n/100));
                n2=((int)(n/10)) % 10;
                n1=((int)n) % 10;
            }
            if((n<100)||(n>1000)){
            printf("Esse número não pode");
            }else{
            printf("%.0f",n1);   
            }
    }
    
