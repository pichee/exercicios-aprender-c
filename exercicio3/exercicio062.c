//Se os numeros de 1 a 5 sao escritos em palavras: um, dois, tres, quatro, cinco, entao ha
//2 + 4 + 4 + 6 + 5 = 22 letras usadas no total. Fac¸a um programa que conte quantas letras
//seriam utilizadas se todos os numeros de 1 a 1000 (mil) fossem escritos em palavras.
//OBS: Nao conte espacos ou hifens. 

//If the numbers from 1 to 5 are written in words: one, two, three, four, five, 
//then there are 2 + 4 + 4 + 6 + 5 = 22 letters used in total. Make a program 
//that counts how many letters would be used if all numbers from 1 to 1000 were written 
//in words. Note: Do not count spaces or hyphens.







#include <stdio.h>


int main(void) {

   int soma = 0;


   int onze_dezenove[] = {4, 4, 5, 8, 6, 9, 9, 7, 8}; 
    int unidades[] = {2, 4, 4, 6, 5, 4, 4, 4, 4}; 
     int e = 1; 
   int dezenas[] = {3, 5, 6, 8, 9, 8, 7, 7, 7};
   int centenas[] = {5, 8, 9, 12, 10, 10, 10, 10, 10};
    int cem = 3, mil = 3; 
   for (int c = 1, i = 0; c <= 100; c++, i++) {
    if (i == 10) 
     i = 0;

       

       if (c <= 10)

           soma+=(c==10?dezenas[0]:unidades[i]);

       else if (c <= 20)

           soma+=(c==20?dezenas[1]:onze_dezenove[i]);

       else if (c <= 30)

           soma+=(c==30?dezenas[2]:dezenas[1]+e+unidades[i]);

       else if (c <= 40)

           soma+=(c==40?dezenas[3]:dezenas[2]+e+unidades[i]);

       else if (c <= 50)

           soma+=(c==50?dezenas[4]:dezenas[3]+e+unidades[i]);

       else if (c <= 60)

           soma+=(c==60?dezenas[5]:dezenas[4]+e+unidades[i]);

       else if (c <= 70)

           soma+=(c==70?dezenas[6]:dezenas[5]+e+unidades[i]);

       else if (c <= 80)

           soma+=(c==80?dezenas[7]:dezenas[6]+e+unidades[i]);

       else if (c <= 90)

           soma+=(c==90?dezenas[8]:dezenas[7]+e+unidades[i]);

       else if (c <= 100)

           soma+=(c==100?cem:dezenas[8]+e+unidades[i]); 

   }


   soma*=10; 

   soma-=cem*9; 


   for (int i = 0; i <= 8; i++) {

       soma+=(centenas[i]+e)*99;
       if (i > 0) 

           soma+=centenas[i];

   }


   soma+=mil;


   printf("Soma dos caracteres dos números de 1 a 1000: | %d |", soma); 


   return 0;

}
