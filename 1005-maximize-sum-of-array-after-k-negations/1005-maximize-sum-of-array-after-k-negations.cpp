class Solution {
public:
    int largestSumAfterKNegations(vector<int>& n, int k) {
        sort(n.begin(), n.end());
        for(int i =0;k>0&&i<n.size() &&n[i]<0;++i,--k)
            n[i]=-n[i];
        return accumulate(n.begin(),n.end(),0)-(k%2)* *min_element(n.begin(), n.end())*2;
        
    }
};