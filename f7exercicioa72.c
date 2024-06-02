//Considerando a estrutura
//struct Vetor{
//float x;
//float y;
//float z;
//};
//para representar um vetor no R3
//implemente uma funcao que calcule a soma de dois
//vetores. Essa funcao deve obedecer ao prototipo:
//void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res);

////Considering the structure
//Vector structure{
//float x;
//float y;
//float z;
//};
//to represent a vector in R3
//implements a function that calculates the sum of two
//vectors. This function must obey the prototype:
//void sum (struct Vector* v1, struct Vector* v2, struct Vector* res);
#include <stdio.h>
 struct vector
 {
    float x;
    float y;
    float z;
 };
 void sum (struct vector* v1, struct vector* v2, struct vector* res){ 
    printf("The results are:");
    res->x = v1->x + v2->x;
    res->y = v1->y + v2->y;
    res->z = v1->z + v2->z;
    
 }
 int main(){
    struct vector v1, v2, res;
    printf("Enter the values for vector 1 (x y z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Enter the values for vector 2 (x y z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);
    sum(&v1,&v2,&res);
    printf("%f %f %f",res.x,res.y,res.z);
 }
