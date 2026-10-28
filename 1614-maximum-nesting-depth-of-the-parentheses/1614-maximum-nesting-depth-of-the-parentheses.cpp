class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxi = INT_MIN;
        bool flag = false;

        for(auto it: s){
            if(it == '('){
                flag = true;
                depth++;
                maxi = max(depth, maxi);
            }
            if(it == ')'){
                depth--;
            }
        }
        return flag ? maxi : 0;
    }
};