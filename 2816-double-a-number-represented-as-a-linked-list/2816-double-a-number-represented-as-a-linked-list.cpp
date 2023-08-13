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
    ListNode* reverse(ListNode* temp2,ListNode* temp1=NULL){
        while(temp2){
            ListNode* temp3=temp2->next;
            temp2->next=temp1;
            temp1=temp2;
            temp2=temp3;
        }
        return temp1;
    }
    ListNode* doubleIt(ListNode* head) {
        head=reverse(head);
        int curr=0;
        ListNode* temp=head;
        ListNode* temp2;
        while(curr||temp){
            int v=temp->val;
            temp->val=(v*2+curr)%10;
            curr=(v*2+curr)/10;
            if(!temp->next && curr){
                ListNode* newNode=new ListNode(curr);
                curr=0;
                temp->next=newNode;
                break;
            }
            temp=temp->next;
        }
        head=reverse(head);
        return head;
    }
};