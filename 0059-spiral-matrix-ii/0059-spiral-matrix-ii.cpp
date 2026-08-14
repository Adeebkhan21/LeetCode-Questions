class Solution {
public:
    vector<vector<int>> generateMatrix(int num) {
        vector<vector<int>> matrix(num, vector<int>(num, 0));
        int top = 0, down = num - 1;
        int left = 0, right = num - 1;
        int currentElement = 1;

        while (currentElement <= num * num) {
            
            for (int c = left; c <= right; c++)
                matrix[top][c] = currentElement++;
            top++;

            
            for (int r = top; r <= down; r++)
                matrix[r][right] = currentElement++;
            right--;

            
            for (int c = right; c >= left && currentElement <= num * num; c--)
                matrix[down][c] = currentElement++;
            down--;

            
            for (int r = down; r >= top && currentElement <= num * num; r--)
                matrix[r][left] = currentElement++;
            left++;
        }

        return matrix;
    }
};