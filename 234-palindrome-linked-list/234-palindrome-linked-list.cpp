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
    bool isPalindrome(ListNode* head) {
        int n;
        if(head==NULL || head->next==NULL)return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* mid=slow;
        ListNode* curr=mid;
        ListNode* prev=NULL;
        ListNode* next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        mid=prev;
        
        ListNode* temp1=head;
        ListNode* temp2=mid;
        
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val!=temp2->val)return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        return true;

    }
};