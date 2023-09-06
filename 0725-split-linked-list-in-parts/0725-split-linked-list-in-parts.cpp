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
    int size(ListNode*head){
        int i=0;
        while(head){
            i++;
            head=head->next;
        }
        return i;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k,NULL);
        int n=size(head),r=n%k,i=0,j=0;
        ListNode* temp=head;
        while(head){
            if(n/k==0){
                ans[i]=temp;
                head=head->next;
                temp->next=NULL;
                temp=head;
                i++;
                continue;
            }
            j++;
            if(j==n/k && r==0){
                j=0;
                ans[i]=temp;
                temp=head;
                head=head->next;
                temp->next=NULL;
                temp=head;
                i++;
            }else if(j==n/k){
                j=0;
                ans[i]=temp;
                head=head->next;
                temp=head;
                head=head->next;
                temp->next=NULL;
                temp=head;
                i++;
                r--;
            }else{
                head=head->next;
            }
        }
        return ans;
    }
};