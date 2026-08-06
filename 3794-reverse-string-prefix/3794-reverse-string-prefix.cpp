class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        string ans = "", subs = "";
        reverse(s.begin(), s.begin() + k);

        return s;
        
    }
};