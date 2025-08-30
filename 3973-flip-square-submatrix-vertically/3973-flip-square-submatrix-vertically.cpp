class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        // Make a copy of the original grid
        vector<vector<int>> res = grid;

        int er = x + k -1;
        int ec = y + k -1;

        int row = er;
        
        for(int i=x; i<=er; i++){
            for(int j=y; j<=ec; j++){
                res[row][j] = grid[i][j];
            }
            row--;
        }
        return res;
    }
};