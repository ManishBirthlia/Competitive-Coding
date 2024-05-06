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
        ListNode* prev=NULL;
        ListNode* front=head;
        while(head){
            front=front->next;
            head->next=prev;
            prev=head;
            head=front;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head=reverse(head);
        ListNode* temp=head->next;
        ListNode* prev=head;
        while(temp){
            if(temp->val<prev->val) prev->next=temp->next;
            else prev=prev->next;
            temp=temp->next;
        }
        head=reverse(head);
        return head;
    }
};