class Solution {
public:
    vector<vector<int>> r;
    void backtrack(int k, int tar, int start, vector<int>& path) {
        if (tar == 0 && k == 0) {
            r.push_back(path);
            return;
        }
        for (int i = start; i <= 9; ++i) {
            if (i > tar || k <= 0) break;
            path.push_back(i);
            backtrack(k - 1, tar - i, i + 1, path);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        backtrack(k, n, 1, path);
        return r;
    }
};