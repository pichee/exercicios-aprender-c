/**

PRECISEI DE AJUDA SENÃO NÃO CONSEGUIRIA RESOLVER ESSA QUESTÃO
Given the head of a singly linked list, return true if it is a 
palindrome
 or false otherwise.

 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    struct ListNode *prev=NULL;
    struct ListNode *tmp;
    while(fast != NULL && fast->next != NULL){
        fast=fast->next->next;
        tmp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=tmp;
    }struct ListNode *secondHalf = slow;
    if (fast != NULL) {
        
        secondHalf = slow->next;
    }

  
    struct ListNode *firstHalf = prev;
    while (firstHalf != NULL && secondHalf != NULL) {
        if (firstHalf->val != secondHalf->val) {
            return false;
        }
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}
//Time i spend:02:30:40
    
