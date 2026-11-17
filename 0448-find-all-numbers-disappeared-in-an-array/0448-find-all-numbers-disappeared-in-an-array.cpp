class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        int n = nums.size();

        for(auto it: nums){
            mpp[it]++;
        }

        for(int i=1; i<=n; i++){
            if(mpp.find(i) == mpp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};