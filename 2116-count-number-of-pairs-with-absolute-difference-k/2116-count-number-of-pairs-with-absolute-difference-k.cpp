class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int res = abs(nums[i] - nums[j]);
                if(k == res){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};