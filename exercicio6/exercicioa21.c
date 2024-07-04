//Faca um programa que armazena filmes produzidos por varios diretores e:
//• Crie e leia um vetor de 5 diretores, cada um contendo nome (maximo 20 letras),
//quantidade de filmes e filmes. O membro filmes e um vetor, que deve ser criado 
//apos ter lido quantidade de filmes. Cada filme e composto por nome, ano e duracao.
//• Procure um diretor por nome, mostrando todos os filmes que ele ja produziu. Repita 
//o processo ate digitar uma string vazia. 

//Make a program see the directors
#include <stdio.h>
#include <string.h>
struct movies
{
    char name[21];
    int total;
    char filmes[10][21];
    int year[10];
    float long1[10];

};
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(){
    struct movies m[5];
    char dire [40];
    int a=0,b=0;
    for (a = 0; a <1; a++)
    {
    b=0;
    printf("What is the name the director:");
    scanf("%20[^\n]",m[a].name);
    while (b==0)
    {
    printf("How much movies he direct:(max 10):");
    getchar();
    scanf("%i",&m[a].total);
    getchar();
    if (m[a].total > 0 && m[a].total <= 10) {
                b = 1; 
            } else {
                printf("Invalid number. Please enter a number between 1 and 10.\n");
                b = 0;
            }}
    b=0;
    for (b = 0; b < m[a].total; b++)
    {
        printf("Enter a name the movie this director:\n");
        scanf("%20[^\n]",m[a].filmes[b]);
        clearInputBuffer();
        printf("This movie is release in what year:\n");
        scanf("%d",&m[a].year[b]);
        clearInputBuffer();
        printf("How long is this movie:");
        scanf("%f",&m[a].long1[b]);
        clearInputBuffer();
    }

    }

    printf("What director do you want:");
    scanf("%20[^\n]", dire);
    a=0;
    b=0;
    for (a = 0; a < 5; a++)
    {
       if (strcmp(dire, m[a].name )==0)
    {
        for (b = 0; b < m[a].total; b++){
            printf("Movie:%s\nYear:%i\nDuration:%.2f",m[a].filmes[b],m[a].year[b],m[a].long1[b]);
        }
    }else{
        printf("Director not found");
    }
    }
    
    
    

    
    
    
        

}
