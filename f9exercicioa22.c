//Crie uma func¸ao para somar dois arrays. Esta funcao deve receber dois arrays e retornar
//a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
//entao a funcao retornar a ZERO (0). Caso a funcao seja concluıda com sucesso a mesma
//deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulacao do array.

//add two arrays 
#include <stdio.h>
int funcao(int *vetor1,int *vetor2,int max,int minimo){
    int i=0;
    for (i = 0; i < minimo; i++)
    {
        int result=vetor1[i]+vetor2[i];
        printf("%i\n",result);
    }
    if (max==minimo)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    

}
int main(){
    int max,n,n1,m,i=0;
    printf("Enter how many numbers the vetor1 there is:");
    scanf("%i",&n);
    printf("Enter how many numbers the vetor1 there is:");
    scanf("%i",&n1);
    if (n>=n1)
    {
        max=n;
        m=n1;
    }
    if (n1>=n)
    {
        max=n1;
        m=n;
    }
    int vetor[n],vetor1[n1];
    for (i = 0; i < n; i++)
    {
        printf("Enter a number for the first vector: ");
        scanf("%i",&vetor[i]);
    }
    for (i = 0; i < n1; i++)
    {
        printf("Enter a number for the first vector: ");
        scanf("%i",&vetor1[i]);
    }
    
    funcao(vetor,vetor1,max,m);
}
