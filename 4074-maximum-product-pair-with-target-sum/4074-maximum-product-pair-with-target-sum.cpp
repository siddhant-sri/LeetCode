class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans = {-1, -1};
        int maxi = INT_MIN;

        unordered_map<int, vector<int>> seen;

        for(int i=0; i<n; i++){
            int complement = target - nums[i];

            if(seen.find(complement) != seen.end()){
                for(int j : seen[complement]){
                    int product = nums[i] * nums[j];
                    if(nums[i] != nums[j] && product > maxi){
                        maxi = product;

                        if(nums[i] > nums[j]){
                            ans = {i, j};
                        }
                        else{
                            ans = {j, i};
                        }
                    }
                }
            }
            seen[nums[i]].push_back(i);
        }
    return ans;
    }
};