struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if (head == NULL)
        return head;
                                        // @chiki.cpp
    struct ListNode* current = head;
    while (current->next != NULL) {
        if (current->val == current->next->val) {
            struct ListNode* temp = current->next;
            current->next = current->next->next;
            free(temp);
        } 
        else 
            current = current->next;
    }
    return head;
}