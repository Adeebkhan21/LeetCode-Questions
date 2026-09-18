class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int km, int tm) {
        int n = nums.size();
        
        if(n == 0 || km < 0  || tm < 0) return false;
        
        unordered_map<int,int> buckets;
        
        for(int i=0; i<n; ++i) {
            int bucket = nums[i] / ((long)tm + 1);
            
            if(nums[i] < 0) --bucket;
            
            if(buckets.find(bucket) != buckets.end()) return true;
            else {
                buckets[bucket] = nums[i];
                if(buckets.find(bucket-1) != buckets.end() && (long) nums[i] - buckets[bucket-1] <= tm) return true;
                if(buckets.find(bucket+1) != buckets.end() && (long) buckets[bucket+1] - nums[i] <= tm) return true;
                
                if(buckets.size() > km) {
                    int key_to_remove = nums[i-km] / ((long)tm + 1);
                    
                    if(nums[i-km] < 0) --key_to_remove;
                    
                    buckets.erase(key_to_remove);
                }
            }
        }
        
        return false;
    }
};