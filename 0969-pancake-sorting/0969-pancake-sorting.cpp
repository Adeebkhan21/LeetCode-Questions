class Solution {
public:
    vector<int> pancakeSort(vector<int>& a) 
    {
        vector<int>ans;
        int r = a.size()-1;
        while(r>0)
        {
            int maxi = 0;
            for(int i=0;i<=r;i++)
            {
                if(a[maxi]<a[i]) maxi = i;
            }
            if(maxi!=r)
            { 
                ans.push_back(maxi+1);
                reverse(a.begin(),a.begin()+maxi+1);
                ans.push_back(r+1);
                reverse(a.begin(),a.begin()+r+1);
            }
            r--;
        }
        return ans;
    }

};