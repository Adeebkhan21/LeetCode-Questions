class Solution {
    vector<pair<int,int>> starts;
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> ans(intervals.size(), -1);
        for(int i=0;i<intervals.size();i++){
            starts.push_back({intervals[i][0], i});
        }
        sort(starts.begin(),starts.end());
        for(int i=0;i<starts.size();i++){
            int f=0, mid;
            int l = starts.size()-1;
            while(f<=l){
                mid = (f+l)/2;
                if(starts[mid].first >= intervals[i][1]){
                    ans[i] = starts[mid].second;
                    l=mid-1;
                }else{
                    f=mid+1;
                }
            }
        }
        return ans;
    }
};