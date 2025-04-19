//Escreva uma funcao que conta o numero de nos nao-folha de uma arvore binaria.
#include <stdio.h>
#include <stdlib.h>
typedef struct No
{
    int valor;
    struct No* Direita;
    struct No* Esquerda;
}No;

No* criarNo(int valor){
    No* novoNo=(No*)malloc(sizeof(No));
    novoNo->valor=valor;
    novoNo->Direita=NULL;
    novoNo->Esquerda=NULL;
    return novoNo;
}

No* criarNaRaiz(No* raiz,int valorr){
    if (raiz==NULL)
    {
        return criarNo(valorr);
    }
    else if (raiz->valor <valorr)
    {
        criarNaRaiz(raiz->Esquerda,valorr);
    }
    else if (raiz->valor > valorr)
    {
        criarNaRaiz(raiz->Direita,valorr);
    }
    else{
        printf("Esse número já está na raiz");
    }
    return raiz;
}

void printar(No *raiz,int *conta){
    if (raiz->Direita==NULL && raiz->Esquerda==NULL)
    {
        conta++;
    }
    
    if (raiz==NULL)
    {
        return;
    }
    printar(raiz->Esquerda,conta);
    printf("%d",raiz->valor);
    printar(raiz->Direita,conta);
    
    
}
int main(){
    int escolha,contador=0,numero;
    No* raiz=NULL;
    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1.Adicionar\n");
        printf("2.Mostrar\n");
        printf("3.conta o numero de nos nao-folha da arvore");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        switch (escolha)
        {
        case 0:
            exit(0);
        break;
        case 1:
            printf("Digite o numero que quer colocar na arvore");
            scanf("%i",&numero);
            criarNaRaiz(raiz,numero);
            break;
        case 2:
            contador=0;
            printar(raiz,&contador);
            break;
        case 3:
            printf("Existem %d arvores não folha",contador);
        default:
            break;
        }   
    }

}
