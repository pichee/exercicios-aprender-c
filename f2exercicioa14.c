//A nota final de um estudante e calculada a partir de tres notas atribuıdas entre o intervalo
//de 0 ate 10, respectivamente, a um trabalho de laboratorio, a uma avaliacao semestral
//e a um exame final. A media das tr es notas mencionadas anteriormente obedece aos
//pesos: Trabalho de Laboratorio: 2; Avaliacao Semestral: 3; Exame Final: 5. De acordo
//com o resultado, mostre na tela se o aluno esta reprovado (media entre 0 e 2,9), de
//recuperacao (entre 3 e 4,9) ou se foi aprovado. Faca todas as verificacoes necessarias.

//The final grade of a student is calculated from three grades assigned within the range of 0 to 10, 
//respectively, for a laboratory work, a semester evaluation, and a final exam. The average of the three
//aforementioned grades follows the weights: Laboratory work: 2; Semester evaluation: 3; Final exam: 5. According
//to the result, display on the screen whether the student is failed (average between 0 and 2.9), in recovery
//(between 3 and 4.9), or if they passed. Make all necessary verifications.
#include <stdio.h>
    int main(){
        float lb,sn,fe,m;
        printf("How much is your laboraty note (0 a 2)");
        scanf("%f",&lb);
        printf("How much is your Semestral note(0 a 3)");
        scanf("%f",&sn);
        printf("How much is your final exam (0 a 5)");
        scanf("%f",&fe);
        m=(lb+sn+fe)/3;
        if (lb>2|| sn>3 || fe>5){
            printf("You put a wrong note");
        }
        if  (m<2.9){
            printf("you are in disapproved");
        }
        if  (m>=3 && m<4){
            printf("you are in recovery");
        if (m>4){
            printf("Congradulations you are aproed")
        }
        }
        
    }
