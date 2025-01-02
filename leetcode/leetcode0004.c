/**
VI o video do augusto galego de como fazia pois não estava conseguindo.
entend9i a teoria mas a pratica ficou meio mais ou menos qualquer coisa fazer mais alguns exercicios sobre inversão de linked list

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL){
        return head;}
    struct ListNode* new_list=NULL;
    while(head!=NULL){
        struct ListNode* temp = head->next;
        head->next=new_list;
        new_list=head;
        head=temp;
    }

    return new_list;
}
//Time i spend=00:59:60.
