class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int cnt = 0;

        for(int i=0; i<n; i++){
            cnt = 0;
            for(int j=0; j<n; j++){
                if(nums[j] < nums[i] && nums[i] != nums[j]){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};