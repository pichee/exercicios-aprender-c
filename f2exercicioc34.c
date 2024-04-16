//Leia a nota e o numero de faltas de um aluno, e escreva seu conceito. De acordo com a
//tabela abaixo, quando o aluno tem mais de 20 faltas ocorre uma reduc¸ao de conceito.

//Show the note theee test based in this table,if the student miss more 20 times
//so your notee is reducee
//9.0 ate 10.0 ´ A B
//7.5 ate 8.9 ´ B C
//5.0 ate 7.4 ´ C D
//4.0 ate 4.9 ´ D E
//0.0 ate 3.9 ´ E E
#include <stdio.h>
    int main(){
        float t;
        int m;
        printf("What is your note in the test\n");
        scanf("%f",&t);
        printf("How many times you missed\n");
        scanf("%i",&m);
        if(t>10){
            printf("This note is imposible");
        }   
        else if(t>=9 && m<=20){
            printf("Your note is A");
        }
        else if(t>=9 && m>20){
            printf("Your note is B");
        }
        else if(t>=7.5 && t<=8.9 && m<=20){
            printf("Your note is B");
        }
        else if(t>=7.5 && t<=8.9 && m>20){
            printf("Your note is C");
        }
        else if(t>=5 && t<=7.4 && m<=20){
            printf("Your note is C");
        }
        else if(t>=5 && t<=7.4 && m>20){
            printf("Your note is D");
        }
        else if(t>=4 && t<=4.9 && m<=20){
            printf("Your note is D");
        }
        else if(t>=4 && t<=4.9 && m>20){
            printf("Your note is E");
        }
        else if(t<=3.9){
            printf("Your note is E");
        }
        
        
    }
