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
    int size(ListNode* head){
        if(!head) return 0;
        return 1+size(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        if(!head->next){
            head=NULL;
        }
        int a=size(head)-n-1;
        while(a>0){
            a--;
            temp=temp->next;
        }if(a==-1){
            head=head->next;
        }else if(temp->next){
            temp->next=temp->next->next;
        }else{
            temp=NULL;
        }
        return head;
    }
};