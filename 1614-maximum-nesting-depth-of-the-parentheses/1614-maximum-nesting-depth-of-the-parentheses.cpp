class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxi = 0;

        for(auto it: s){
            if(it == '('){
                depth++;
                maxi = max(depth, maxi);
            }
            if(it == ')'){
                depth--;
            }
        }
        return maxi;
    }
};