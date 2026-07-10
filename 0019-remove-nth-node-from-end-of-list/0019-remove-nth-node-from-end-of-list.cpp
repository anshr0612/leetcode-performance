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
        ListNode* b=new ListNode(0);
        b->next=head;
       ListNode* a=head;
       int p=0;
       while(a!=NULL){
        p++;
        a=a->next;
       }
       ListNode* temp=b;
       for(int i=1;i<p-n+1;i++){
        temp=temp->next;
       }
       temp->next=temp->next->next;
       return b->next;
    }
};