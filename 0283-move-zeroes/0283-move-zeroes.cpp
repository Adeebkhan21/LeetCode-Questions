class Solution {
public:
    void moveZeroes(vector<int>& n) {
        int left = 0;

        for (int right = 0; right < n.size(); right++) {
            if (n[right] != 0) {
                swap(n[right], n[left]);
                left++;
            }
        }        
    }
};