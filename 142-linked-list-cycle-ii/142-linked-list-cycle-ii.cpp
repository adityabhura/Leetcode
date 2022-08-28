/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>mp;
        ListNode* temp;
        temp=head;
        int i=0;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end())return temp;
            mp[temp]=i;
            i++;
            temp=temp->next;
        }
        return NULL;
    }
};