class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        vector<int> ans;

        for(int i=mini; i<maxi; i++){
            bool found = false;
            for(auto it: nums){
                if(it == i){
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(i);
            }
        }

        return ans;
    }
};