/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    if(head==NULL) return NULL;

    short int flag;

    struct ListNode *temp = head, *prev = NULL;

    while(temp != NULL)
    {
        flag=0;
        if(temp->val == val)
        {
            if(temp == head)
            {
                head = temp->next;
            }
            else
            {
                flag=1;
                prev->next = temp->next;
            }
        }
        if(!flag)
        prev = temp;

        temp = temp->next;
    }

    return head;
    
}