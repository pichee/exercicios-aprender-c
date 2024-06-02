//Considerando a estrutura:
//struct Ponto{
//int x;
//int y;
//};
//para representar um ponto em uma grade 2D, implemente uma funcao que indique se um
//ponto p esta localizado dentro ou fora de um retangulo. O retangulo e definido por seus
//vertices inferior esquerdo v1 e superior direito v2. A funcao deve retornar 1 caso o ponto
//esteja localizado dentro do retangulo e 0 caso contrario. Essa funcao deve obedecer ao
//prototipo:
//int dentroRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p)

//Considering the structure:
//struct Point{
//int x;
//int y;
//};
//to represent a point on a 2D grid, implement a function that indicates whether a
//point p is located inside or outside a rectangle. The rectangle is defined by its
//vertices bottom left v1 and top right v2. The function must return 1 if the point
//is located inside the rectangle and 0 otherwise. This function must comply with the
//prototype:
//int inRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p)
#include <stdio.h>
struct Ponto {
    int x;
    int y;
    int p;
};
int dentroRet (struct Ponto* v1, struct Ponto* v2, struct Ponto* p){
    
    int largura = v2->x - v1->x;
    int altura = v2->y - v1->y;
    int area = largura * altura;
    int i=p->p;
    if (i<area && i>0)
    {
        printf("1");
    }
    else{
        printf("2");
    }
    

}
int main(){
    struct Ponto v1, v2, p;
    v1.x=0;
    v2.y=0;
    printf("Enter a where is the point is located:");
    scanf("%i",&p.p);
    while (v1.x<=0)
    {
       printf("How much is the left vertex:");
        scanf("%i",&v1.x);
    }
        while (v2.y<=0)
    {
       printf("top right:");
        scanf("%i",&v2.y);
    }
    dentroRet(&p,&v1,&v2);
    

    
}
