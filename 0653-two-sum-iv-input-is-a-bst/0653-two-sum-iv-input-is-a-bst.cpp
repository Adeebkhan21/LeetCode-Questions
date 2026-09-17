class Solution {
    unordered_set<int> set;

public:
    bool findTarget(TreeNode* root, int km) {
        if (!root) return false;
        if (set.count(km  - root->val)) return true;
        set.insert(root->val);
        return findTarget(root->left, km) || findTarget(root->right, km);
    }
};