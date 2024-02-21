class Solution {
public:
    int length(int n){
        // string ans = to_string(n);
        // return ans.size();
        int cnt = 0;
        while(n>0){
            cnt++;
            n/=10;
        }
        return cnt;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st;

        for(auto it : arr1){
            while(it){
                st.insert(it);
                it/=10;
            }
        }

        int maxi = 0;
        for(auto it: arr2){
            while(it){
                if(st.find(it) != st.end()){
                    maxi = max(maxi, length(it));
                    break;
                }
                it/=10;
            }
        }
        return maxi;
    }
};