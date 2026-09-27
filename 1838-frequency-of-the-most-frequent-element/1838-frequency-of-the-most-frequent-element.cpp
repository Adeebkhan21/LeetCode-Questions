class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0, r=0;
        long re =0, t =0;
        while(r<nums.size()){
            t+=nums[r];
            while(nums[r]*static_cast<long>(r-l+1)> t+k){
                t-=nums[l];
                l+=1;
            }
            re=max(re,static_cast<long>(r-l+1));
            r+=1;
        }
        return static_cast<int>(re);
    }
};