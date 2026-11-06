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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        ListNode* h;
        int a = list1 -> val;
        int b = list2 -> val;
        ListNode* answer = a <= b ? list1 : list2;
        if (a <= b) {
            h = list1;
            list1 = list1 -> next;
        }
        else {
            h = list2;
            list2 = list2 -> next;
        }
        
        h -> next = mergeTwoLists(list1, list2);
        return answer;
    }
};
