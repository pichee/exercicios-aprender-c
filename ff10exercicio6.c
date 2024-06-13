//Faca um programa que simule a memoria de um computador: o usuario ir a especificar o
//tamanho da memoria, ou seja, quantos bytes ser ao alocados do tipo inteiro. Para tanto,
//a memoria solicitada deve ser um valor multiplo do tamanho do tipo inteiro. Em seguida,
//o usuario tera 2 opcoes: inserir um valor em uma determinada posicao ou consultar o
//valor contido em uma determinada posicao. A memoria deve iniciar com todos os dados
//zerados.

//Make a program that you can enter a new memory
#include <stdio.h>
#include <stdlib.h>
    int main(){
        int n;
        printf("How is the size the memory?");
        scanf("%i",&n);
        int *vetor=(int *)malloc(n*sizeof(int));
        
         if (vetor == NULL) {
        printf("Error allocating memory\n");
        return 0;
       
         } 
         printf("%i",*vetor);
         int i=0;
         int value;
          int ponteiro;
         while (i==0)
         {
            printf("What do you want do:\n[1]Chance a memory\n [2]see a memory [3]Turn off");
            int choice;
            scanf("%i",&choice);
            if (choice==1)
            {
                printf("\n select what memory do you want chance");
               
                scanf("%i",&ponteiro);
                printf("What is the new value:");
                
                scanf("%i",&value);
                *(vetor+ponteiro)=value;
            }
            if (choice==2)
            {
                printf("What value do you want see:");
                scanf("%i",&value);
                printf("%i",(*vetor+value));
            }
            if (choice==3)
            {
                return 0;
            }
            
         }
         
    }
