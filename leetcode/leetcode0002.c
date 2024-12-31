/**
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* eraser;

    while(head!=NULL &&head->val==val){
        eraser=head;
        head=head->next;
        free(eraser);
    }
    
    if(head==NULL){
        return head;
    }
    struct ListNode* body = head;
    while(body->next!=NULL){
        if(body->next->val==val){
            eraser=body->next;
            body->next=eraser->next;
            free(eraser);
        }
    else{
        body = body->next;   
    }
           
    }

    
    
    return head;
}
//Time i spend=00:29:45.
