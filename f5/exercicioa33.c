//Faca um programa para ler uma tabela contendo os nomes dos alunos de uma turma de
//5 alunos. O programa deve solicitar ao usuario os nomes do aluno, sempre perguntando
//se ele deseja inserir mais um nome na lista. Uma vez lidos todos os alunos, o usuario
//ira indicar um nome que ele deseja verificar se est ´ a presente na lista, onde o programa
//deve procurar pelo nome (ou parte deste nome) e se encontrar deve exibir na tela o nome
//completo e o ındice do vetor onde esta guardado este nome.

//Make a program read five numbers and after found if the name is in the check or not
#include <stdio.h>
#include <string.h>
    int main(){
        char v[5][31];
        char re;
        char name[31];
        int a=0,aux=0,found=0;
        while (a<5)
        {
            printf("Enter a name:");
            scanf("%30[^\n]",v[a]);
            getchar();
            if(a<5){
            printf("Do you want insert a new name?[Y]or[N]:");
            scanf(" %c",&re);
                if(re=='y'||re=='Y'){
                    a++;
                }else{
                    break;
                }
            getchar();    
            }}
        a=0;
        getchar();
        printf("How name do you want:");
        scanf("%30[^\n]",name);
        while (aux<5)
        {
             if(strcmp(v[a], name)==0){
                found++;
             }
        aux++;
        }
        if(found!=0){
            printf("The name was found");
        }else{
            printf("The name isn't found");
        }

        }
        
