class Solution {
public:
    vector<int> findDuplicates(vector<int>& number) {
        vector<int>a;
        int n = size(number);
        for(int i =0; i<n;i++){
            int x= abs(number[i]);
            if(number[x-1]<0){
                a.push_back(x);
            }
            number[x-1]*=-1;
        }
        return a;
        
    }
};