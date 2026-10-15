class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        queue<pair<TreeNode*, bool>> qR;
        qR.push({root, false});
        int ans = 0;
        while(qR.size()) {
            auto [cur, isLeft] = qR.front(); qR.pop();
            if(!cur -> left && !cur -> right && isLeft) 
                ans += cur -> val;
            if(cur -> right) qR.push({cur -> right, false});
            if(cur -> left) qR.push({cur -> left, true});
        }
        return ans;
    }
};