class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int er = x+k-1;
        int ec = y+k-1;

        while(x < er){
            for(int j=y; j<=ec; j++){
                swap(grid[x][j], grid[er][j]);
            }
            x++;
            er--;
        }
        return grid;
    }
};