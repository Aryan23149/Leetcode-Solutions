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
        //brute force using array
        // ListNode* k=head;
        // if(k==NULL){
        //     return NULL;
        // }
        // vector<int> a;
        // while(k){
        //     a.push_back(k->val);
        //     k=k->next;
        // }
        // k=head;
        // int s=a.size();
        // for(int i=s-1;i>=0;i--){
        //     k->val=a[i];
        //     k=k->next;
        // }
        // return head;


        //brute force using stacks
        // ListNode * x=head;
        // stack<int> values;
        // while(x!=nullptr){
        //     values.push(x->val);
        //     x=x->next;
        // }
        // x=head;
        // while(x!=nullptr){
        //     x->val=values.top();
        //     values.pop();
        //     x=x->next;
        // }
        // return head;

    
    }
};