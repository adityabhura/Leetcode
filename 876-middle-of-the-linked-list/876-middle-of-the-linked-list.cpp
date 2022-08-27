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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        n=n/2;
        n+=1;
        //if(n%2==0)n+=1;
        temp=head;
        int i=1;
        while(i!=n){
            temp=temp->next;
            i++;
        }
        return temp;
    }
};