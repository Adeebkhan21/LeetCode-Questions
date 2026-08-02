class Solution {
public:
    set<int> ans;
    vector<bool> used;

    void solve(vector<int>& digits, int depth, int num) {
        if (depth == 3) {
            if (num % 2 == 0)
                ans.insert(num);
            return;
        }

        for (int i = 0; i < digits.size(); i++) {

            if (used[i])
                continue;

            if (depth == 0 && digits[i] == 0)
                continue;

            used[i] = true;

            solve(digits, depth + 1, num * 10 + digits[i]);

            used[i] = false;   
        }
    }

    vector<int> findEvenNumbers(vector<int>& digits) {
        used.assign(digits.size(), false);

        solve(digits, 0, 0);

        return vector<int>(ans.begin(), ans.end());
    }
};