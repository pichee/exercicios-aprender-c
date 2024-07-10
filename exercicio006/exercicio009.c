//Faca um programa que faca operacoes simples de numeros complexos:
//• Crie e leia dois numeros complexos z e w, compostos por parte real e parte imaginaria.
//• Apresente a soma, subtracao e produto entre z e w, nessa ordem, bem como o
//modulo de ambos

//Read two numbers and your part imaginary and show the add,subtraction,multiplication,division
#include <stdio.h>
    struct numbers
    {
        int z,zi,w,wi;
    };
    
    int main(){
        struct numbers numbers;
        int s,si;
        printf("What is the value of z:");
        scanf("%i",&numbers.z);
        printf("What is the part imaginary the z:");
        scanf("%i",&numbers.zi);
        printf("What is the value of w:");
        scanf("%i",&numbers.w);
        printf("What is the part imaginary the z:");
        scanf("%i",&numbers.wi);
        printf("The somation:\n");
        s=numbers.w+numbers.z;
        si=numbers.wi+numbers.zi;
        printf("%i part inter\n%i part imaginary\n",s,si);
        printf("The subtraction:\n");
        s=numbers.w-numbers.z;
        si=numbers.wi-numbers.zi;
        printf("%i part inter\n%i part imaginary\n",s,si);
        printf("The multiplication:\n");
        s=numbers.w*numbers.z;
        si=numbers.wi*numbers.zi;
        printf("%i part inter\n%i part imaginary\n",s,si);
        printf("The division:\n");
        s=numbers.w/numbers.z;
        si=numbers.wi/numbers.zi;
        printf("%i part inter\n%i part imaginary\n",s,si);

    }
