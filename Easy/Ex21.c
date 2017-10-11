/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if(l1 == NULL)
       return l2;
    if(l2 == NULL)
        return l1;
    struct ListNode *temp = NULL;
    
    if(l1->val > l2->val)
    {
        temp = l2;
        l2 = l1;
        l1 = temp;
    }
    
    struct ListNode *l1visit = l1;
    struct ListNode *l2visit = l2;
    
    struct ListNode *l1NewAdd = NULL;
    
    while(l1visit->next != NULL && l2visit != NULL)
    {
        if(l1visit->val < l2visit->val && l1visit->next->val < l2visit->val)
        {   
            l1visit = l1visit -> next;
            continue; 
        }
        if(l1visit->val <= l2visit->val && l1visit->next->val >= l2visit->val)
        {
            l1NewAdd = l2visit;
            l2visit = l2visit->next;
            l1NewAdd-> next = l1visit->next;
            l1visit->next = l1NewAdd;
        }
    }
    
    if(l1visit->next == NULL)
    {
        l1visit->next = l2visit;
    }
    
    return l1;
        
    
    
}
