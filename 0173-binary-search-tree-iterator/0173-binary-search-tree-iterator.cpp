class BSTIterator {
public:
    stack<TreeNode*> sa;
    BSTIterator(TreeNode* root) {
        partialInorder(root);
    }
    
    void partialInorder(TreeNode* root){
        while(root != NULL){
            sa.push(root);
            root = root->left;
        }
    }
    
    int next() {
        TreeNode* top = sa.top();
        sa.pop();
        partialInorder(top->right);
        return top->val;
    }
    
    bool hasNext() {
        return !sa.empty();
    }
};