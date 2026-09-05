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
        /*SO THE CORE CONCEPT OF THIS SOLUTION IS HAVING TWO POINTER IF ONE 
        POINTER LET'S SAY SLOW TRAVELS X THEN FAST TRAVEL 2X IT MEANS
        SLOW TRAVEL ONE NODE AND FAST TRAVEL TWO NODE IF WE SAY A LINKED LIST HAVING 6 NODES AND FAST POINTER IS AT THE LAST NODE THAT IS 6TH NODE THEN SLOW POINTER WOULD BE AT THE MIDDLE NODE  */
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};