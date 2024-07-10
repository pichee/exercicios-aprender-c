//Faca um programa que pergunte ao usuario quantos valores ele deseja armazenar em 
//um vetor de double, depois use a funcao MALLOC para reservar (alocar) o espaco de 
//memoria de acordo com o especificado pelo usuario. Esse vetor deve ter um tamanho
//maior ou igual a 10 elementos. Use este vetor dinamico como um vetor comum, atri
//buindo aos 10 primeiros elementos do vetor valores aleatorios (usando a funcao rand) 
//entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do
//vetor.

// Write a program that asks the user how many values he wants to store in 
 //a vector of double, then use the MALLOC function to reserve (allocate) the space 
 //memory as specified by the user.  This vector must have a size
 //greater than or equal to 10 elements.  Use this dynamic vector as an ordinary vector, attri
 //giving the first 10 elements of the vector random values (using the rand function) 
 //between 0 and 100. Display on the screen the values stored in the first 10 elements of the
 //vector

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int v;
printf("How many numers do you want Put in the array:");
scanf("%d",&v);
double *vector=(double *)malloc(v*sizeof(double));
  if(vector==NULL){
  printf("Error");
  return 0;
  }
  int i=0;
    srand(time(NULL));
  for(i=0;i<v;i++){
   vector[i]=(rand()%101);
   printf("%.2f\n",vector[i]);
   }}
   free(vector);
   
  