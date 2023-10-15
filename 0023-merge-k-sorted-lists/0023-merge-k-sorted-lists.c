struct ListNode* merge(struct ListNode* list1, struct ListNode* list2){
    if (list1 == NULL)
        return list2;
    else if (list2 == NULL)
        return list1;

    struct ListNode* result = NULL;
    struct ListNode* curr = NULL;
    struct ListNode* read1 = list1;
    struct ListNode* read2 = list2;

    if (read1->val <= read2->val) {
        result = read1;
        read1 = read1->next;
    } else {
        result = read2;
        read2 = read2->next;
    }

    curr = result;

    while (read1 != NULL && read2 != NULL) {
        if (read1->val <= read2->val) {
            curr->next = read1;
            read1 = read1->next;
        } else {
            curr->next = read2;
            read2 = read2->next;
        }
        curr = curr->next;
    }

    if (read1 != NULL)
        curr->next = read1;
    else
        curr->next = read2;

    return result;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if (!listsSize)
        return NULL;
    
    struct ListNode* res = lists[0];
    
    for (int i = 1; i < listsSize; i++){
        res = merge(res, lists[i]);
    }
    
    return res;
}
