class Solution {
public:
    int numIslands(vector<vector<char>>& g) {

        int m = g.size();
        int n = g[0].size();
        int count = 0;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(g[i][j] == '1') {
                    count++;
                    traveseid(g, i, j, m, n);
                }
            }
        }

        return count;
    }

    void traveseid(vector<vector<char>>& g, int i, int j, int m, int n) {

        if(i < 0 || j < 0 || i >= m || j >= n || g[i][j] == '0') {
            return;
        }

        g[i][j] = '0';

        traveseid(g, i, j + 1, m, n);
        traveseid(g, i + 1, j, m, n);
        traveseid(g, i, j - 1, m, n);
        traveseid(g, i - 1, j, m, n);
    }
};