class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int ctr=0;
        while(i<t.size()&&j<s.size()){
            if(t[i]==s[j]){
                ctr++;
                j++;
            }
            i++;
        }
        if(ctr==s.size()){
            return true;
        }
        return false;
    }
};