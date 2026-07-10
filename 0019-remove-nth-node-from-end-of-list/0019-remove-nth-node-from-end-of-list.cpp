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
        ListNode* temp=head;
        ListNode* b=new ListNode(0);
        int p=0;
       while(temp!=NULL){
        p++;
        temp=temp->next;
       }
       temp=b;
       n=p-n+1;
       for(int i=1;i<n;i++){
        temp->next=head;
        temp=temp->next;
        head=head->next;
       }
       temp->next=head->next;
       return b->next;
    }
};