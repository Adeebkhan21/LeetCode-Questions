class Solution {
public:
    int minStartValue(vector<int>& b) {
        int ans = 0,sum =0;
        for(auto el: b)
            sum+=el, ans = min(ans, sum);
        return -ans+1;
        
    }
};