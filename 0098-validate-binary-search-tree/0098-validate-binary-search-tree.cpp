/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBSTUtil(TreeNode* node, long long minimum, long long maximum) {
        if (node == nullptr) 
            return true;

        
        if (node->val <= minimum || node->val >= maximum) 
            return false;

       
        return isBSTUtil(node->left, minimum, node->val) &&
               isBSTUtil(node->right, node->val, maximum);
    }

    bool isValidBST(TreeNode* root) {
        
        return isBSTUtil(root, LLONG_MIN, LLONG_MAX);
    }
};