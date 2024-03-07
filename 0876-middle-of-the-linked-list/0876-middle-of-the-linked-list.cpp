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
    ListNode* middleNode(ListNode* head){
        ListNode*slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        // ListNode *temp=head;
        // int count=0;
        // while(temp!=NULL){
        //     temp=temp->next;
        //     count++;
        // }
        // int middle=count/2;
        // while(middle!=0){
        //     head=head->next;
        //     middle--;
        // }
        // return head;
    }
};