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
    /*
    bool isPalindrome(ListNode* head) {
        if(!head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while( fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=slow->next;
        ListNode* temp=fast->next;
        ListNode* temp2;
        if(temp){
            temp2=temp->next;
        }else{
            temp2=temp;
        }
        fast->next=NULL;
        while(temp2){
            temp->next=fast;
            fast=temp;
            temp=temp2;
            temp2=temp2->next;
        }
        if(temp){
            temp->next=fast;
            fast=temp;
        }
        slow->next=fast;
        while(fast){
            if(head->val!=fast->val) return false;
            head=head->next;
            fast=fast->next;
        }
        return true;
    }*/
    
    /*
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp1=head->next;
        ListNode* temp2=head;
        while(head){
            if(head==temp2){
                head->next=NULL;
                head=temp1;
                temp1=temp1->next;
            }else if(temp1){
                head->next=temp2;
                temp2=head;
                head=temp1;
                temp1=temp1->next;
            }else{
                head->next=temp2;
                temp2=head;
                head=temp1;
            }
        }
        return temp2;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* head2=reverse(head);
        if(head==NULL || head->next==NULL) return true;
        if(head->next->next==NULL && head->val!=head->next->val)  return false;
        while(head!=head2 || head->next!=head2){
            if(head->val!=head2->val){return false;}
            head=head->next;
            head2=head2->next;
        }
        return true;
    }*/
    
    
    bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        vector<int> values;
        while(start != NULL){
            values.push_back(start->val);
            start = start->next;
        }
        int s=0,e=size(values)-1;
        while(s<e){
            if(values[s]!=values[e]) return false;
            s++;
            e--;
        }
        return true;
    }
};