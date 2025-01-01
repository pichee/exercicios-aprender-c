/**
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int cont=0;
    struct ListNode *body=head;
    while(body!=NULL){
        cont++;
        body=body->next;
    }
    cont=cont/2;
    for(int i=0;i<cont;i++){
        body=head;
        head=head->next;
        free(body);
    }
    return head;
}
//Time i spend=00:10:50.
