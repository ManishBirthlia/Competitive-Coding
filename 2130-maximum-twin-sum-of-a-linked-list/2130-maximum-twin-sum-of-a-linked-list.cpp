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
    ListNode* reverse(ListNode* head){
        ListNode* t1=NULL;
        ListNode* t2=head;
        ListNode* t3=head->next;
        while(t3){
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t2->next=t1;
        return t2;
    }
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* h1=reverse(slow);
        int ans=0;
        while(h1 && head){
            ans=max(ans,head->val+h1->val);
            head=head->next;
            h1=h1->next;
        }
        return ans;
    }
};