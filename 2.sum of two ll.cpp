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
    long long int p(int n){
        if(n==0){return 1;}
        return 10*p(n-1);
    }
    ListNode* makell(int n){
        long long int num=log10(n)+1;
        vector <int>arr(num);
        int j=0;
        while(n>1){
            arr[j++]=
        }
        ListNode* head=new ListNode;
        head->val=arr[0];
        ListNode* prev=head;
        for(int i=1;i<arr.size();i++){
            ListNode* a=new ListNode;
            a->val=arr[i];
            prev->next=a;
            prev=a;
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=l1;
        long long int count=0;
        long long int sum=0;
        while(a!=NULL){
            sum+=pow(10,count)*(a->val);
            count++;
            a=a->next;
        }
        a=l2;
        count=0;
        while(a!=NULL){
            sum+=pow(10,count)*(a->val);
            count++;
            a=a->next;
        }
        ListNode* ans=makell(sum);
        return ans;
    }
};