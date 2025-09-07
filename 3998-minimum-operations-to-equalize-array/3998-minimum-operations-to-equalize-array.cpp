class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(auto it: nums){
            if(it == nums[0]){
                cnt++;
            }
        }
        if(cnt == n)  return 0;
        return 1;
    }
};