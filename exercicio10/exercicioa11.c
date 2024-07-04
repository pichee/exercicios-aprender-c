//)Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
//(a) Deverao ser armazenados, para cada aluno: matrıcula, sobrenome (apenas um) e
//ano de nascimento.
//b) Ao in´ıcio do programa, o usuario devera informar o numero de alunos que serao/
//armazenados
//(c) O programa devera alocar dinamicamente a quantidade necessaria de memoria
//para armazenar os registros dos alunos.
//(d) O programa devera pedir ao usuario que entre com as informacoes dos alunos.
//(e) Ao final, mostrar os dados armazenados e liberar a memoria alocada.
#include <stdio.h>
#include <stdlib.h>
struct alunos{
int matricula;
int ano;
char sobrenome[30];
};
int main(){
 struct alunos alunos;
 int g;
 printf("How much students you need:");
 scanf ("%i",&g);
 struct alunos *vetor=(struct alunos *)malloc(g*sizeof(struct alunos));
if(vetor==NULL){
printf("Error");
return 0;
}
int i=0;
for(i=0;i<g;i++){
printf("How is the ID the %i student:",i+1);
scanf("%i",&vetor[i].matricula);
printf("How is the year the %i student born:",i+1);
scanf("%i",&vetor[i].ano);
getchar();
printf("How is the your Second Name  the %i:",i+1);
scanf("%s",vetor[i].sobrenome);
}
i=0;
for(i=0;i<g;i++){
printf("%i ",vetor[i].matricula);
printf("%i ",vetor[i].ano);
printf("%s ",&vetor[i].sobrenome);
printf("\n");
}
free(vetor);
}