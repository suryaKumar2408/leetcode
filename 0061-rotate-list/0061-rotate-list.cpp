class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL) return head;
        int n=1;
        ListNode* temp=head;
        ListNode* tail=head;
        while(tail->next!=NULL){
            n++;
            tail=tail->next;
        }
        k=k%n;
        if(k==0) return head;
        for(int i=0;i<n-k-1;i++){
            temp=temp->next;
        }
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};