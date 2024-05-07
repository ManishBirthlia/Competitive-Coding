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
    ListNode* reverse(ListNode *head){
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
    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        ListNode* temp=head;
        int curr=0,c;
        while(temp->next){
            c=(2*temp->val+curr);
            temp->val=c%10;
            curr=c/10;
            temp=temp->next;
        }
        c=(2*temp->val+curr);
        curr=c/10;
        temp->val=c%10;
        if(c>9) temp->next=new ListNode(curr);
        return reverse(head);
    }
};