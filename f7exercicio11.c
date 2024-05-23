//Elabore uma funcao que receba tres notas de um aluno como parametros e uma letra.
//Se a letra for A, a funcao dever  a calcular a media aritmetica das notas do aluno; se for P
//devera calcular a media ponderada, com pesos 5, 3 e 2.

//Make a function receb three notes and show the media 
#include <stdio.h>
    int funcao(float n1,float n2, float n3,char letter){
        if (letter=='A')
        {
            n1=(n1+n2+n3)/3;
            printf("The result is %.2f",n1);
        }else{
            n1=(n1*5+n2*3+n3*2)/10;
            printf("The result is %.2f",n1);
        }
        
    };
    int main(){
        char letter;
        float n1=0,n2=0,n3=0;
        while(letter!='P'&&letter!='A'){
            printf("Choose P for  weighted media:\nChoose A for  arithmetic media:\n");
            scanf(" %c",&letter);
        }
        printf("What is the first note:");
        scanf("%f",&n1);
        printf("What is the second note:");
        scanf("%f",&n2);
        printf("What is the third note:");
        scanf("%f",&n3);
        funcao(n1,n2,n3,letter);
    }
