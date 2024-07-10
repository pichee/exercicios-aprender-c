//Faca um programa que leia um vetor de 10 posicoes e verifique se existem valores iguais
// e os escreva na tela.

//Make a program read a vector with 10 postions and show if there is value iguals and
//shwoin in the frame


#include <stdio.h>
int main(){
  int a,v[10],a1,c,co=0,vi[10];
    for(a=0;a<10;a++){
        printf("Enter a number:\n");
        scanf("%i",&v[a]);
    }
    for(a1=0;a1<10;a1++){
        for(c=1+a1;c<10;c++)
        {
          if(v[a1]==v[c]){
            vi[co]=v[a1];
            co++;
            break;
        }}
        
    }
    printf(" existem %i valores Iguais ",co);
    for(a=0;a<co;a++){
        printf("%i", vi[a]);
    }  
    }
 
