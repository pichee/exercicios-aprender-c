/**

Given the head of a linked list head, in which each node contains an integer value.

Between every pair of adjacent nodes, insert a new node with a value equal to the greatest common divisor of them.

Return the linked list after insertion.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if(head->next==NULL){
        return head;
    }
    struct ListNode* body=head;
    struct ListNode* bodyNext=head->next;

    while(body->next!=NULL){
        
        int valueNewNode=1;
        for(int i=1;i<=body->val;i++){
            
            if(body->val % i==0 && bodyNext->val % i==0){
                valueNewNode=i;
            }
        }
        if(valueNewNode!=0){
            struct ListNode* novo;
            novo=(struct ListNode*)malloc(sizeof(struct ListNode));

            novo->val=valueNewNode;
            novo->next=bodyNext;
            body->next=novo;
            body=novo->next;
            bodyNext=body->next;
            
            
        }else{
              body=body->next;
              bodyNext=bodyNext->next;
        }
        if(body==NULL || bodyNext==NULL){
            return head;
        }
        
      
    }
    return head;
}

//Time i spend=00:41:39
