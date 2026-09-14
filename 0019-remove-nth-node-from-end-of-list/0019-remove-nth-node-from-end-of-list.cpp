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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int remove=count-n;
        int num=0;
        if(remove == 0)
            return head->next;
        ListNode* move=head;
        while(move!=NULL){
            num++;
            if(num==remove){
                move->next=move->next->next;
            }
            move=move->next;
        }
        return head;
    }
};