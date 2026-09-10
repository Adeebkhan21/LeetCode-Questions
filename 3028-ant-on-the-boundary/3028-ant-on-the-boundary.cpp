class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int number=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                number+=nums[i];
                if(number==0) cnt++;
            }
            else{
                number+=nums[i];
                if(number==0) cnt++;
            }
        }
        return cnt;
    }
};