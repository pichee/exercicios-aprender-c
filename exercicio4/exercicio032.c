//Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuario nao
//informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
//abaixo:
//• Soma entre x e y: soma de cada elemento de x com o elemento da mesma posicao
//em y.
//• Produto entre x e y: multiplicacao de cada elemento de  x com o elemento da mesma
//posicao em y.
//• Diferenca entre x e y: todos os elementos de x que nao existam em  y.
//• Intersecao entre x e y: apenas os elementos que aparecem nos dois vetores.
//• Uniao entre  x e y: todos os elementos de x, e todos os elementos de y q

//Read two vectores and show what aks:
// add x+y
// multiple x*y
// diference
// interject
// union
#include <stdio.h>

int main() {
    int a, v[5], v1[5], vu[10],vi[10],ad=0,p=0;

    printf("Vector x\n");
    for (a = 0; a < 5; a++) {
        printf("Enter a number: ");
        scanf("%i", &v[a]);
    }

    printf("Vector y\n");
    for (a = 0; a < 5; a++) {
        printf("Enter a number: ");
        scanf("%i", &v1[a]);
    }

    printf("DIFFERENCE:\n");
    for (a = 0; a < 5; a++) {
        int encontrado = 0;
        for (int i = 0; i < 5; i++) {
            if (v[a] == v1[i]) {
                encontrado = 1;
                vi[p]=v[a];
                p++;

                break;
            }
        }
        if (!encontrado) {
            vu[ad] = v[a];
            ad++;
        }
    }

    printf("Elements in x not present in y:\n");
    for (a = 0; a < ad; a++) {
        printf("%i\n", vu[a]);
    }
    printf("Interseson:\n");
    for(a = 0;a < p; a++) {
         printf("%i\n", vi[a]);
    }
    printf("Union\n");
     for(a = 0;a < 5; a++) {
         printf("%i\n", v[a]);
    }
    for(a = 0;a < 5; a++) {
         printf("%i\n", v1[a]);
    }
    return 0;
}
