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
        if (head == nullptr) {
            return head;
        }
        ListNode* i = head -> next;
        if (i == nullptr) {
            return head;
        }
        ListNode* h = head;
        h -> next = nullptr;
        while (i != nullptr) {
            ListNode* a = i -> next;
            i -> next = h;
            h = i;
            i = a;
        }
        head = h;
        return head;
    }
};
