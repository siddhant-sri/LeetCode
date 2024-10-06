class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int sum = 0;
            while(nums[i]>0){
                int r = nums[i]%10;
                sum += r;
                nums[i] /= 10;
            }
            ans.push_back(sum);
        }
        int min = INT_MAX;
        for(int i=0; i<ans.size(); i++){
            if(ans[i] < min){
                min = ans[i];
            }
        }
        return min;
    }
};