//Escreva uma funcao recursiva que permita fazer a multiplicacao a russa de 2 entradas.
//A Multiplicacao a russa consiste em:
//(a) Escrever os numeros A e B, que se deseja multiplicar na parte superior das colunas.
//(b) Dividir A por 2, sucessivamente, ignorando o resto ate chegar a unidade, escrever
//os resultados da coluna A.
//(c) Multiplicar B por 2 tantas vezes quantas se haja dividido A por 2, escrever os resultados sucessivos na coluna B.
//(d) Somar todos os numeros da coluna B que estejam ao lado de um numero ımpar da
//coluna A.
 
 //Read a function that permit a multiplication russa:
#include <stdio.h>
    int funcao(int a,int b){
        int i=0,c=0,s=0;
        int vetor[99],vetor1[99];
        while (a!=1)
        {
            vetor[i]=a/2;
            a=a/2;
            vetor1[i]=b/2;
            b=b/2;
            i++;
        }
        c=i;
        while (c!=0)
        {
            if (vetor[c]%2==1)
            {
               s=s+vetor1[c];
            }
            c--;
        }
        printf("%i",s);

    }
    int main(){
        int f[99],f1[99];
        printf("Enter a number:");
        scanf("%i",&f);
        printf("Enter a number:");
        scanf("%i",&f1);
        funcao(f,f1);
    }
