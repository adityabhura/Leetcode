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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return head;
        ListNode* fast;
        ListNode* slow;
        fast=head;
        slow=head;
        int cnt=0;
        while(slow!=NULL){
            cnt++;
            slow=slow->next;
        }
        slow=head;
        for(int i=0;i<k%cnt;i++){
            fast=fast->next;
            //if(fast==NULL)fast=head;
        }
        ListNode* prev;
        while(fast!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        if(slow==NULL)return head;
        ListNode* temp;
        temp=slow;
        prev->next=NULL;
        ListNode* temp1;
        temp1=temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        head=temp1;
        return head;
    }
};