class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fi=-1,li=-1;
        int l=0,r=nums.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                fi=m;
                r=m-1;
            }
            else if(nums[m]<target)l=m+1;
            else r=m-1;
        }
        l=0,r=nums.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                li=m;
                l=m+1;
            }
            else if(nums[m]<target)l=m+1;
            else r=m-1;
        }
        return {fi,li};
        
    }
};