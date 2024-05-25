//Escreva uma funcao que gera um triangulo lateral de altura 2*n-1 e n largura. Por exem 
//plo, a saıda para n = 4 seria 
//* 
//**
//***
//****
//***
//**
//*
//Make a function the make a triangule and if the number is 4 make the input be 
//* 
//**
//***
//****
//***
//**
//*
#include <stdio.h> 
int funcao(int n,int aux,int c){
    aux=0; 
    while (aux<n){
    c=0;
        while (c<=aux)
        {
            printf("*");
            
            c++;
        }
        printf("\n");
        aux++;
    }
    aux=n;
    while (aux!=0){
    c=0;
    aux--;
        while (c<aux)
        {
            printf("*");
            
            c++;
        }
        printf("\n");
        
    }

    } 
    int main(){
        int a=0,c=0,b=0;
        printf("Enter How Is the bigger line your triangule:");
        scanf("%i",&a);
        funcao(a,b,c); 
    }
