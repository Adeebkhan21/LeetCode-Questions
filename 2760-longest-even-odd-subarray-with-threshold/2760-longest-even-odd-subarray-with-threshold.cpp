class Solution {
public:
    int longestAlternatingSubarray(vector<int>& num, int th) {
        int n = num.size(),maxi = 0,i = 0,j = 0,flag = 0;
        while(j < n){
            if(flag == 0){
               if(num[j] % 2 == 0 && num[j] <= th){
                    i = j;
                    maxi = max(maxi,j - i + 1);
                    flag = 1;
                } 
            }
            else if(flag == 1){
                int x = num[j-1],y = num[j],c = x + y;
                if(c % 2 && num[j] <= th) 
                    maxi = max(maxi,j - i + 1);
                else{
                    flag = 0;
                    j--; 
                }
            }
            j++;
        }
        return maxi;
    }
};