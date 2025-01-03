/**
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    if(head==NULL){
        return false;
    }
    if(head->next==NULL){
        return false;
    }
    while(slow!=NULL){
        if(fast==NULL||fast->next==NULL||fast->next->next==NULL){
            fast=head;
        }else{
            fast=fast->next->next;
        }
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
//Time i spend:00:17:15
