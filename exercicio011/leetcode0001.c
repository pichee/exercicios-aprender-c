/*Given head which is a reference node to a singly-linked list.

The value of each node in the linked list is either 0 or 1.

The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int getDecimalValue(struct ListNode* head) {
    char answer[100]="";
    char aux[2];
    struct ListNode *body=head;
    while (body!=NULL)
    {
        sprintf(aux,"%d",body->val);
        strcat(answer,aux);
        body = body->next;
    }
    int answerFinal=0;
    for (int i = 0; answer[i]!='\0'; i++)
    {   
        int num=answer[i]-'0';
        if (num == 1) {
            answerFinal = answerFinal * 2 + 1;
        } else {
            answerFinal = answerFinal * 2;
        }
    }
    return answerFinal;
    }
//The time i spent =01:30:19
    
 
