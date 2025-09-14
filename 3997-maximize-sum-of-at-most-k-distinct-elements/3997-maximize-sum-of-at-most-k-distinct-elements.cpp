class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i=n-1; i>=0; i--){
            if(find(ans.begin(), ans.end(), nums[i]) == ans.end()){
                ans.push_back(nums[i]);
            }
            

            if (ans.size() == k){
                return ans;
            }
        }
        return ans;
    }
};