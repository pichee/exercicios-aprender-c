//Considerando a estrutura
//struct Vetor{
//float x;
//float y;
//float z;
//};
//para representar um vetor no R3 implemente um programa que calcule a soma de dois
//vetores.

//add two blocks
#include <stdio.h>
struct vetor{
float x;
float y;
float z;
};
    int main(){
        int a=0;
        float ri,r1i;
        char r,r1;
        struct vetor vetor;
        printf("What is the value x?");
        scanf("%f",&vetor.x);
        printf("What is the value y?");
        scanf("%f",&vetor.y);
        printf("What is the value z?");
        scanf("%f",&vetor.z);
        getchar();
        while (a==0)
        {
            printf("Select one vector to add:");
            scanf(" %c",&r);
            if (r=='x'||r=='y'||r=='z')
            {
                break;
            }
            else{
                printf("Enter x,y or z");
            }
            
        }
        while (a==0)
        {
            printf("Select other vector to add:");
            scanf(" %c",&r1);
            if ((r=='x'||r=='y'||r=='z')&& r1!=r)
            {
                break;
            }else{
                printf("Enter a vector don't reapt");
            }
            
        }
        if (r=='x')
        {
            ri=vetor.x;
        }
        if (r=='y')
        {
            ri=vetor.y;
        }
        if (r=='z')
        {
            ri=vetor.z;
        }
        if (r1=='y')
        {
            r1i=vetor.y;
        }
        if (r1=='x')
        {
            r1i=vetor.x;
        }
        if (r1=='z')
        {
            r1i=vetor.z;
        }
        r1i=r1i+ri;
        printf("The addition is igual %f",r1i);
        
        
        
        
    }

