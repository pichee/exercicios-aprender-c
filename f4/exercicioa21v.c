//Faca um programa que receba do usuario dois vetores,A e B, com 10 numeros inteiros
//cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
//do vetor C.

//Make a program receb teo vectors and show the difference between them.
    #include <stdio.h>
        int main(){
            int va[10];
            int vb[10],vc[10],a;
            for(a=0;a<10;a++){
                printf("Enter a number:");
                scanf("%i",&va[a]);
            }
            a=0;
            for(a=0;a<10;a++){
                printf("Enter a number:");
                scanf("%i",&vb[a]);
            }
            for(a=0;a<10;a++){
                vc[a]=va[a]-vb[a];
                printf("%i - %i = %i\n",va[a],vb[a],vc[a]);
            }

        }
