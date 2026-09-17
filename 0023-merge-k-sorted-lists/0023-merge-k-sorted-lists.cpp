class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& li) {
        if (li.empty()) {
            return nullptr;
        }
        return mergeKListsHelper(li, 0, li.size() - 1);
    }
    
    ListNode* mergeKListsHelper(vector<ListNode*>& li, int start, int end) {
        if (start == end) {
            return li[start];
        }
        if (start + 1 == end) {
            return merge(li[start], li[end]);
        }
        int mid = start + (end - start) / 2;
        ListNode* left = mergeKListsHelper(li, start, mid);
        ListNode* right = mergeKListsHelper(li, mid + 1, end);
        return merge(left, right);
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        
        while (l1 && l2) {
            if (l1->val < l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        
        curr->next = l1 ? l1 : l2;
        
        return dummy->next;
    }
};