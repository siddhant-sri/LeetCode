class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        int n = nums.size();

        for(int i=1; i<=n; i++){
            mpp[i]++;
        }
        for(auto it: nums){
            mpp[it]--;
        }

        for(auto it: mpp){
            if(it.second == 1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};