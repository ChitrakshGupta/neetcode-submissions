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
        ListNode* h=head;
        ListNode* rev=NULL;
        while(h!=NULL){
            ListNode* temp=h->next;
            h->next=rev;
            rev=h;
            h=temp;

        }

        return rev;
        
    }
};
