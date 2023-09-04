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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        ListNode* temp=head;
        ListNode* temp2=head->next;
        while(temp!=temp2 && temp2 && temp2->next){
            temp=temp->next;
            temp2=temp2->next->next;
        }
        if(temp==temp2) return true;
        return false;
    }
};