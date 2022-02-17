
struct ListNode* sortList(struct ListNode* head){
     int temp[9999],size=-1;
    for(struct ListNode *i=head;i!=NULL;i=i->next)
        temp[++size]=i->val;
    mergesort(temp,0,size);
    int s=0;
    for(struct ListNode *i=head;i!=NULL;i=i->next)
        i->val=temp[s++];
    return head;
}

void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}
void merge(int arr[],int low,int middle,int high){

    int list1[middle-low+1],list2[high-middle+1];
    int i,a1,a2;

    for(i=low,a1=0;i<=middle;i++,a1++)
        list1[a1]=arr[i];

    for(i=middle+1,a2=0;i<=high;i++,a2++)
        list2[a2]=arr[i];

    int s1=0,s2=0;
    i=low;

    while(s1<a1 && s2<a2){
        if(list1[s1]<=list2[s2]){
            arr[i++]=list1[s1++];
        }
        else{
            arr[i++]=list2[s2++];
        }
    }
    while(s1<a1)
        arr[i++]=list1[s1++];
    while(s2<a2)
        arr[i++]=list2[s2++];
}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int middle=(low+high)/2;

        mergesort(arr,low,middle);
        mergesort(arr,middle+1,high);
        merge(arr,low,middle,high);
    }
}
