/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* st = head;
    struct ListNode* ls = head;
    
    for(int i = 0; i < n; i++){
        ls = ls->next;
        if(!ls)
            return head->next;
    }
    printf("%d", st->val);
    printf("%d", ls->val);
    while(ls->next){
        ls = ls->next;
        st = st->next;
    }
    st->next = st->next->next;
    printf("%d", st->val);
    printf("%d", ls->val);
    return head;
}