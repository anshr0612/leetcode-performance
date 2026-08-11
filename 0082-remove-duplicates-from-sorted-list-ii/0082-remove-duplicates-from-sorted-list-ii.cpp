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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* p=&dummy;
        while(p->next!=NULL && p->next->next!=NULL){
            if(p->next->val==p->next->next->val){
                int duplicate=p->next->val;
                while(p->next!=NULL && p->next->val==duplicate){
                    p->next=p->next->next;
                }
            }else{
            p=p->next;
            }
        }
        return dummy.next;
    }
};