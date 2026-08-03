class Solution {
public:
    set<int> s;

    void solve(vector<int>& digits, vector<bool>& used, int pos, int curr) {

        
        if (pos == 3) {
            if (curr % 2 == 0) {
                s.insert(curr);
            }
            return;
        }

        for (int i = 0; i < digits.size(); i++) {

            if (used[i])
                continue;

            
            if (pos == 0 && digits[i] == 0)
                continue;

            used[i] = true;

            solve(digits, used, pos + 1, curr * 10 + digits[i]);

            used[i] = false;   
        }
    }

    int totalNumbers(vector<int>& digits) {

        vector<bool> used(digits.size(), false);

        solve(digits, used, 0, 0);

        return s.size();
    }
};