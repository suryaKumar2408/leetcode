/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)return head;
        ListNode* temp=head;
        int size=0;
        int remove =0;
        while(temp!=0){
            temp=temp->next;
            size++;
        }
        remove=size/2;
        ListNode* move=head;
        int count=0;
        if(head->next==NULL){
            return head->next;
        }
        while(move!=NULL){
            count++;
            if(count==remove){
                move->next=move->next->next;
            }
            move=move->next;

        }
        return head;
        
    }
};