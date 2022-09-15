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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{
    ListNode *p1 = headA;
    ListNode *p2 = headB;
    int a=0,b=0;
        
    while(p1!=NULL){
        p1=p1->next;
        a++;
    }
        
    while(p2!=NULL){
        p2=p2->next;
        b++;
    }
        
     cout<<a<<" "<<b<<" " ;  
    int dif=abs(a-b);
       
    p1 = headA;
    p2= headB;    
        
    if(a<b){
        for(int i=0;i<dif;i++){
            p2=p2->next;
        }
        
    }else{
        for(int i=0;i<dif;i++){
            p1=p1->next;
        }
    }
        
    while(p1!=NULL && p2!=NULL && p1!=p2){
        p1=p1->next;
        p2=p2->next;
    }
        
    
        
    return p1;
}
};