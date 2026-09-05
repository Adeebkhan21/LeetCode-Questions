
#include <vector>

class Solution {
public:
    
    int maximumStrongPairXor(std::vector<int>& num) {
        int a = 0;

        
        for (auto x : num) {
            for (auto y : num) {
                
                if (abs(x - y) <= std::min(x, y)) {
                    
                    a = std::max(a, x ^ y);
                }
            }
        }

        
        return a;
    }
};
