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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        int total=0;
        while(temp){
            total++;
            temp=temp->next;
        }
        int rem=total-n;
        if(rem==0)
        return head->next;

        temp=head;
        dummy->next=temp;
        for(int i=0;i<total-1;i++){
            if((i+1)==rem){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return dummy->next;
        
    }
};
