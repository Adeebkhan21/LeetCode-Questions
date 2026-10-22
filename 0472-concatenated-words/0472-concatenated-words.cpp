class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& w) {
        unordered_set<string> words_set;
        for (string wo : w) words_set.insert(wo);
        vector<string> res;
    
        for (string wo : w) {
            int n = wo.size();
            vector<int> dp(n + 1, 0);
            dp[0] = 1;
            for (int i = 0; i < n; i++) {
                if (!dp[i]) continue;
                for (int j = i + 1; j <= n; j++) {
                    if (j - i < n && words_set.count(wo.substr(i, j - i))) {
                        dp[j] = 1;
                    }
                }
                if (dp[n]) {
                    res.push_back(wo);
                    break;
                }
            }
        }
        return res;
    }
};