class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        // Preserve original array
        vector<int> sorted = nums;

        // Sort the copy
        sort(sorted.begin(), sorted.end());

        // Find the first occurrence of each number
        for (int i = 0; i < n; i++) {
            int cnt = lower_bound(sorted.begin(), sorted.end(), nums[i])
                      - sorted.begin();

            ans.push_back(cnt);
        }

        return ans;
    }
};