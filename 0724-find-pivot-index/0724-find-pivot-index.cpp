class Solution {
public:
    int pivotIndex(vector<int>& n) {
        
        int rightSum = accumulate(n.begin(), n.end(), 0);
        
        int leftSum = 0;
        
        for (int idx = 0; idx < n.size(); idx++) {
            
            rightSum -= n[idx];
            
            if (leftSum ==rightSum)
                return idx;     
            leftSum += n[idx];
        }
        return -1;     
    }
};