class Solution {
public:
    TreeNode* sortedListToBST(ListNode* h) {
        if (h == nullptr) return nullptr;
        if (h->next == nullptr) return new TreeNode(h->val);
        
        ListNode* slow = h, *fast = h, *slow_prev = nullptr;
        while (fast != nullptr && fast->next != nullptr) {
            slow_prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        
        TreeNode* root = new TreeNode(slow->val);
        
        
        slow_prev->next = nullptr;
        
        
        root->left = sortedListToBST(h);
        root->right = sortedListToBST(slow->next);
        
        return root;
    }
};