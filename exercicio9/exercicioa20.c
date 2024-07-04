//Implemente uma funcao que receba como parametro um array de numeros reais de
//tamanho N e retorne quantos numeros negativos ha nesse array. Essa funcao deve
//obedecer ao prototipo:
//int negativos(float *vet, int N);

//Make a function that receb a array that float numbers that N and return how much negative numbers there is.
//use (float *vet, int N);
#include <stdio.h>

int funcao(float *vet,int n){
    int i=0,c=0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the a number:");
        scanf("%f",&vet[i]);
        if (vet[i]<0)
        {
            c++;
        }
        
        
    }
    printf("There is %i negative numbers.",c);
    
                        }
int main(){
        int n;
        printf("How much numbers do you want in the vector:");
        scanf("%i",&n);
        float v[n];
        funcao(&v,n);
    }
