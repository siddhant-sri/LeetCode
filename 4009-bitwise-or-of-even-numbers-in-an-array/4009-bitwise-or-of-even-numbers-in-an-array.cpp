class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int n = nums.size();
        int bitwiseOr = 0;
        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 0){
                bitwiseOr = bitwiseOr | nums[i];
            }
        }
        return bitwiseOr;
    }
};