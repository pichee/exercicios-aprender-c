#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *Esquerda;
    struct No *Direita;
} No;

No* novoNo(int valor) {
    No* novo = (No*)malloc(sizeof(No));
    if (novo != NULL) {
        novo->valor = valor;
        novo->Esquerda = NULL;
        novo->Direita = NULL;
    }
    return novo;
}

No* criarNaArvore(No *raiz, int conteudo) {
    if (raiz == NULL) {
        return novoNo(conteudo);
    } else if (conteudo < raiz->valor) {
        raiz->Esquerda = criarNaArvore(raiz->Esquerda, conteudo);
    } else if (conteudo > raiz->valor) {
        raiz->Direita = criarNaArvore(raiz->Direita, conteudo);
    } else {
        printf("Valor já existe na árvore.\n");
    }
    return raiz;
}

void mostrarArvore(No* raiz) {
    if (raiz == NULL) return;
    mostrarArvore(raiz->Esquerda);
    printf("%d ", raiz->valor);
    mostrarArvore(raiz->Direita);
}

void liberarArvore(No* raiz) {
    if (raiz == NULL) return;
    liberarArvore(raiz->Esquerda);
    liberarArvore(raiz->Direita);
    free(raiz);
}

int main() {
    No* raiz = NULL;
    int opcao, valor;

    do {
        printf("\nMENU:\n");
        printf("1. Inserir valor na árvore\n");
        printf("2. Mostrar árvore em ordem\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                raiz = criarNaArvore(raiz, valor);
                break;
            case 2:
                printf("Árvore em ordem: ");
                mostrarArvore(raiz);
                printf("\n");
                break;
            case 3:
                liberarArvore(raiz);
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while(opcao != 3);

    return 0;
}
