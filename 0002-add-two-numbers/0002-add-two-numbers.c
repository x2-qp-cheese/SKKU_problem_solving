/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode* next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummyHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* current = dummyHead;
    int carry = 0;

    while (l1 || l2) {
        int x = (l1) ? l1->val : 0;
        int y = (l2) ? l2->val : 0;
        int sum = x + y + carry;

        carry = sum / 10;

        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = sum % 10;

        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }

    if (carry > 0) {
        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = carry;
    }

    current->next = NULL;
    struct ListNode* result = dummyHead->next;
    free(dummyHead);

    return result;
}
