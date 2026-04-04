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
        if(head == nullptr) return nullptr;
        ListNode* nextt = head->next;
        ListNode* temp1 = head;
        head->next = nullptr;
        while(nextt != nullptr){
            ListNode* temp2 = nextt->next;
            nextt->next = temp1;
            temp1 = nextt;
            nextt = temp2;
        }
        return temp1;
    }
};