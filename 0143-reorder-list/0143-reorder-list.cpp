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
    void reorderList(ListNode* head) {
        vector<ListNode*>v;
        while(head){
            v.push_back(head);
            head=head->next;
        }
        int start=0,end=v.size()-1;
        head=new ListNode(0);
        while(start<end){
            head->next=v[start];
            head=head->next;
            head->next=v[end];
            head=head->next;
            start++;
            end--;
        }
        if(v.size()%2==1) {
            head->next=v[v.size()/2];
            head=head->next;
        }
        head->next=NULL;
        head=v[0];
    }
};