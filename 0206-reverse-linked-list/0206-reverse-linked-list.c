/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* cur = head, *backup_nxt = NULL, *prev = NULL;

    while(cur != NULL)
    {
        backup_nxt = cur->next;

        cur->next = prev;

        prev =  cur;
        cur = backup_nxt;
    }

    head = prev;
    return head;
    
}