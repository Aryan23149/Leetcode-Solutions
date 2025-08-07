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

    ListNode* middleNode(ListNode* head) {
        //method 1: brute force approach
        // ListNode* h=head;
        // int n=0;
        // while(h!=nullptr){
        //     n++;
        //     h=h->next;
        // }
        // int x;
        // if(n%2==0){
        //     x=n/2;
        // }
        // else{
        //     x=n/2;
        // }
        // h=head;
        // while(x>0){
        //     h=h->next;
        //     x--;
        // }
        // return h;

    //method 2: tortoise hare method
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next;
            if(fast==nullptr){
                return slow;
            }
            else{
                fast=fast->next;
            }
            slow=slow->next;
        }
        return slow;
    }
};