//Make a math test for children who are learning to add integers less than 100.
//Choose random numbers between 1 and 100, and display the question on the screen:
//"What is the sum of a + b", where a and b are the random numbers. Ask for the answer.
//Make five questions for the student, and show them the questions and the correct answers,
//as well as how many times the student got it right.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){
        int a,b,au,r,p;
        srand(time(NULL));
        a=rand()% 50 + 1;
        b=rand()% 50 + 1;
        printf("what is the addition the %d+%d\n",a,b);
        scanf("%i",&r);
        au=a+b;
        if(r==au){
            p++;
        }
        a=rand()% 50 + 1;
        b=rand()% 50 + 1;
        printf("what is the addition the %d+%d\n",a,b);
        scanf("%i",&r);
        au=a+b;
        if(r==au){
            p++;
        }
        a=rand()% 50 + 1;
        b=rand()% 50 + 1;
        printf("what is the addition the %d+%d\n",a,b);
        scanf("%i",&r);
        au=a+b;
        if(r==au){
            p++;
        }
        a=rand()% 50 + 1;
        b=rand()% 50 + 1;
        printf("what is the addition the %d+%d\n",a,b);
        scanf("%i",&r);
        au=a+b;
        if(r==au){
            p++;
        }
        a=rand()% 50 + 1;
        b=rand()% 50 + 1;
        printf("what is the addition the %d+%d\n",a,b);
        scanf("%i",&r);
        au=a+b;
        if(r==au){
            p++;
        }
        printf("You got it right %i questions",p);
        
        
    }
