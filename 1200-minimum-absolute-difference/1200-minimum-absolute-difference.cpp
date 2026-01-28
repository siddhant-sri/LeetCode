class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;

        // Find min difference b/w neighbours
        for(int i=1; i<arr.size(); i++){
            minDiff = min(minDiff, arr[i]-arr[i-1]);
        }

        // Find pairs with minDiff
        for(int i=1; i<arr.size(); i++){
            if(abs(arr[i]-arr[i-1]) == minDiff){
                result.push_back({arr[i-1], arr[i]});
            }
        }
        return result;
    }
};