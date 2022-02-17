
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
     if(l1==NULL && l2==NULL){
            return NULL;
        }
       struct ListNode* temp1=l1;
       struct ListNode* temp2=l2;

       struct ListNode* head=NULL;
       struct ListNode* tail=NULL;
    while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<=temp2->val){
                if(head==NULL){
                    head=tail=temp1;
                    temp1=temp1->next;
                }
                else{
                    tail->next=temp1;
                    tail=tail->next;
                    temp1=temp1->next;
                }
            }
            else{
                if(head==NULL){
                    head=tail=temp2;
                    temp2=temp2->next;
                }
                else{
                    tail->next=temp2;
                    tail=tail->next;
                    temp2=temp2->next;
                }
            }
        }
        while(temp1!=NULL){
            if(head==NULL){
                head=tail=temp1;
                temp1=temp1->next;
            }
            else{
                tail->next=temp1;
                tail=tail->next;
                temp1=temp1->next;
            }
        }
        while(temp2!=NULL){
            if(head==NULL){
                head=tail=temp2;
                temp2=temp2->next;
            }
            else{
                tail->next=temp2;
                tail=tail->next;
                temp2=temp2->next;
            }
        }
        return head;

}
