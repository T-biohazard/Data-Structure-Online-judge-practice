
struct ListNode* oddEvenList(struct ListNode* head){
    if(head==NULL || head->next==NULL || head->next->next==NULL)
        return head;
    else{
    struct ListNode *odd=head;
    struct ListNode *even=head->next;
    struct ListNode *evenHead=even;

    while(even!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=even->next;

        even->next=odd->next;
        even=odd->next;
    }
    odd->next=evenHead;
    return head;
    }
}
