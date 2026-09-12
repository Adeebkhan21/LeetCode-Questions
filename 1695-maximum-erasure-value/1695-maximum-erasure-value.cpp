class Solution {
public:
    int maximumUniqueSubarray(vector<int>& n) {
        int result = 0, cS = 0, start = 0;
        unordered_set<int> seen;

        for (int end = 0; end < n.size(); end++) {
            while (seen.find(n[end]) != seen.end()) {
                seen.erase(n[start]);
                cS -= n[start];
                start++;
            }

            cS += n[end];
            seen.insert(n[end]);

            result = max(result, cS);
        }

        return result;
    }
};