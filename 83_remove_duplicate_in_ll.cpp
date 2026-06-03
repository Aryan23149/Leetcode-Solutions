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
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode* mover=head->next;
            ListNode* tracker=head;
            if(mover==nullptr || tracker==nullptr){return head;}
            while(mover!=nullptr){
                int current_element=tracker->val;
                int next_element=mover->val;
                if(next_element==current_element){
                    mover=mover->next;
                }
                else{
                    // ListNode* current_pointer=tracker;
                    tracker->next=mover;
                    tracker=mover;
                    mover=mover->next;
                }
            }
            return head;
        }
    };