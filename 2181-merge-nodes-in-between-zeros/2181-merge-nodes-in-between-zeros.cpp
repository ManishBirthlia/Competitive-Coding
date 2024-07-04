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
    ListNode* mergeNodes(ListNode* head) {
        int a=0;
        int b=0;
        ListNode *head1=NULL;
        ListNode *temp=NULL;
        head=head->next;
        while(head){
            if(head->val!=0){
                a+=head->val;
            }
            if(head->val==0){
                b++;
                ListNode* n=new ListNode(a);
                if(b==1){
                    head1=n;
                    temp=n;
                }else{
                    temp->next=n;
                    temp=temp->next;
                }
                a=0;
            }
            head=head->next;
        }
        return head1;
    }
};