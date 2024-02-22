class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();  //row
        int n = matrix[0].size();  //col
        int maxi = 0;
        for(int c=0; c<n; c++){
            for(int r=0; r<m; r++){
                maxi = max(maxi, matrix[r][c]);
            }
            for(int r=0; r<m; r++){
                if(matrix[r][c] == -1){
                    matrix[r][c] = maxi;
                }
            }
            maxi = 0;
        }
        return matrix;
    }
};