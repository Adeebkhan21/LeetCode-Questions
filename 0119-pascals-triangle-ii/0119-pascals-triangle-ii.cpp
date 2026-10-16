class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(1, 1);

        for (int i = 0; i < rowIndex; i++) {
            vector<int> neWRow;
            neWRow.push_back(1);
            for (int j = 1; j < row.size(); j++) {
                neWRow.push_back(row[j - 1] + row[j]);
            }
            neWRow.push_back(1);
            row = neWRow;
        }

        return row;        
    }
};