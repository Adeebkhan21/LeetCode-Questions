class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int start =0;
        int curr_cost= 0;
        int max_len = 0;
        for (int end =0; end < n; ++end){
            curr_cost += abs(s[end]-t[end]);
            while(curr_cost > maxCost){
                curr_cost -= abs(s[start] - t[start]);
                ++start;
            }
            max_len = max(max_len, end-start+1);
        
        }
        return max_len;
    }
};