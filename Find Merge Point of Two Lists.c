int findMergeNode(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    while(headA){
        SinglyLinkedListNode *tmp = headA->next;
        headA->next = NULL;
        headA = tmp;
    }

    while(headB){
        if(headB->next == NULL){
            return headB->data;
        }
        headB = headB->next;
    }
    return 0;
}
