//Fac¸a um programa que leia dez conjuntos de dois valores, o primeiro representando o
//numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno
//mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente
//com suas alturas.



//Show what student is more tall and the small tall

 #include <stdio.h>
    int main(){
        float v[10],v1[10],tg,tm;
        int nm,ng,a;
        printf("Enter a number of the student:");
         scanf("%f",&v[0]);
        printf("Enter your tall:");
         scanf("%f",&v1[0]);
         tg=v1[0];
         ng=(int)v[0];
         tm=v1[0];
         nm=(int)v[0];
        for (a = 1; a < 10; a++)
        {
         printf("Enter a number of the student:");
         scanf("%f",&v[a]);
        printf("Enter your tall:");
         scanf("%f",&v1[a]);
         if(v1[a]>tg){
            tg=v1[a];
            ng=v[a];
         }
         if(v1[a]<tm){
            tm=v1[a];
            nm=v[a];
         }
        
        }
        printf("The bigger student has %.2f and your number is %i\nThe smaller student has %.2f and your number is %i",tg,ng,tm,nm);
        
    }
