class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
    return NULL;
}
if(head->next==NULL){
    return head;
}

 ListNode* ans=addFun(head);
        return ans;
}

    ListNode* addFun(ListNode* head){
        if(head==NULL){
    return NULL;
}
if(head->next==NULL){
    return head;
}
  ListNode* t=addFun(head->next->next);
  ListNode* p=head->next;
  p->next=head;
  head->next=t;

 return p;
    }
};
