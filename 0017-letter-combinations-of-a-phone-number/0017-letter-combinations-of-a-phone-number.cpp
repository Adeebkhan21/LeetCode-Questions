class Solution {
private:
    void solve(string digit, string op, int i, vector<string>& a,
               string mapping[]) {
        if (i >= digit.length()) {
            a.push_back(op);
            return;
        }

        int num = digit[i] - '0';
        string value = mapping[num];

        for (int j = 0; j < value.length(); j++) {
            op.push_back(value[j]);
            solve(digit, op, i + 1, a, mapping);
            op.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digit) {
        vector<string> a;
        if (digit.length() == 0) {
            return a;
        }
        int i = 0;
        string op;
        string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digit, op, i, a, mapping);
        return a;
    }
};