class Solution {
    private:
    double minElement(vector<double> & nums){
        double mini = DBL_MAX;
        int n = nums.size();
        for(int i=0; i<n; i++){
            mini = min(mini, nums[i]);
        }
        return mini;
    }
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> average;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n/2; i++){
            average.push_back((nums[i] + nums[n-i-1])/2.0);
        }
        double ans = minElement(average);
        return ans;
    }
};