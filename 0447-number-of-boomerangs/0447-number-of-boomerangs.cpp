class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int r = 0, n = p.size();
        for (int i = 0; i < n; ++i) {
            unordered_map<int, int> map;
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                int dx = p[i][0] - p[j][0];
                int dy = p[i][1] - p[j][1];
                int distSquared = dx * dx + dy * dy;
                ++map[distSquared];
            }
            for (auto& [dist, count] : map) r += count * (count - 1);
        }
        return r;
    }
};