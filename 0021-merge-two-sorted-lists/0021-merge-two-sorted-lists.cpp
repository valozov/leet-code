class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        auto ans = list2;
        if(list2 == NULL) return list1;
        else if(list1 == NULL) return list2;
        while(list1 != nullptr){
            while(list2->next != nullptr && (list2->next)->val < list1->val) list2 = list2->next;
            if(list2->next == nullptr) {
                if(list2->val < list1->val)
                    list2->next = new ListNode(list1->val);
                else{
                    int temp = list2->val;
                    list2->val = list1->val;
                    list2->next = new ListNode(temp);
                }
                list1 = list1->next;
                continue;
            }
            if(list2->val > list1->val){
                int temp = list2->val;
                list2->val = list1->val;
                list2->next = new ListNode(temp, list2->next);
                list1 = list1->next;
                continue;
            }
            list2->next = new ListNode(list1->val, list2->next);
            list1 = list1->next;
            
        }
        return ans;
    }
};