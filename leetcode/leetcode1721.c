/**
You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth 
node from the beginning and the kth node from the end (the list is 1-indexed).
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode *body = head;
    int cont = 1;
    while (cont != k) {
        body = body->next;
        cont++;
    }
    struct ListNode *val1 = body; 
    struct ListNode *val2 = head;
    struct ListNode *temp = head;
    int count = 1;
    while (temp != NULL) {
        if (count > k) {
            val2 = val2->next; 
        }
        temp = temp->next;
        count++;
    }
    int aux = val1->val;
    val1->val = val2->val;
    val2->val = aux;
    return head;
}
