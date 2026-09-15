class Solution {
public:
    int countGoodSubstrings(string str) {
        int i = 0;
        int j = 0;
        int n = str.size();
		unordered_map<char, int>mp;
		int ans = 0;
        while (i < n && j < n) {
            mp[str[j]]++;
            if (j - i + 1 < 3) {
                j++;
            } else if (mp.size() == 3) {
              ans++;
                mp.erase(str[i]);
                i++;
                j++;
            } else {
                mp[str[i]]--;
                if (mp[str[i]] == 0) {
                    mp.erase(str[i]);
                }
                i++;
                j++;
                
            }
        }
        
        
        return ans;
        
    }
};