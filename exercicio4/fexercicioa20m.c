//Faca programa que leia uma matriz 3 x 6 com valores reais.
//(a) Imprima a soma de todos os elementos das colunas ımpares.x
//(b) Imprima a media aritmetica dos elementos da segunda e quarta colunas.x
//(c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
//(d) Imprima a matriz modificada.

//Make a matrix 3 x 6 and show
//the somation the odd colunes
//a media the colune 4 more 2
//chance the colune 6 for somation 1 and 2
//show the modification the matrix

#include <stdio.h>
    int main(){
        int v[3][6];
        int i,j,soma=0,c=0;
        float media=0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
            {
                printf("Enter a number for the matrix:");
                scanf("%i",&v[i][j]);
                if (j%2==1)
                {
                    soma+=v[i][j];
                }
                if (j==2 || j==4){
                    media+=v[i][j];
                    c++;
                }
                
            }
            
        }
        media=media/c;
        printf("somation odd colunes %i\n",soma);
        printf("media colune 2 and 4:\n%.2f\n",media);
        printf("Old matrix\n");
        for (i = 0; i < 3; i++)
        {   c=0;
            for (j = 0; j < 6; j++)
            {
                printf("%i ",v[i][j]);
                if(c==5){
                    printf("\n");
                }
                else{
                    c++;
                }
            }
        }
        printf("New matrix\n");
        for (i = 0; i < 3; i++){
                v[i][5]=v[i][1]+v[i][2];
        }
                v[0][5]=v[0][1]+v[0][2];
         for (i = 0; i < 3; i++)
        {   c=0;
            for (j = 0; j < 6; j++)
            {
                printf("%i ",v[i][j]);
                if(c==5){
                    printf("\n");
                }
                else{
                    c++;
                }}}}
