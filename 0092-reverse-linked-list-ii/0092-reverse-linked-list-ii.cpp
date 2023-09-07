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
    ListNode* reverse(ListNode* mid,ListNode* temp2){
        ListNode* left=temp2;
        ListNode* right=mid->next;
        while(mid){
            mid->next=left;
            left=mid;
            mid=right;
            if(right) right=right->next;
        }
        return left;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right){
        if(left==right) return head;
        ListNode* temp1=new ListNode(0,head);
        ListNode* temp2=head;
        head=temp1;
        while(right){
            cout<<temp1->val<<' '<<temp2->val<<endl;
            if(left-1>0){ 
                temp1=temp1->next;
                left--;         
            }
            if(right==1){
                ListNode* nt=temp2->next;
                temp2->next=NULL;
                temp2=nt;
            }else{
                temp2=temp2->next;
            }
            right--;
        }
        temp1->next=reverse(temp1->next,temp2);
        return head->next;
    }
};