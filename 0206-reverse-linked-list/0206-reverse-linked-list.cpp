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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp2=head;
        if(head!=NULL){
            ListNode* temp1=head->next;
            while(temp!=NULL){
                head=temp;
                temp=temp->next;
                head->next=temp1;
                temp1=head;
            
            }
            temp2->next=NULL;
        }
        return head;
    }
};