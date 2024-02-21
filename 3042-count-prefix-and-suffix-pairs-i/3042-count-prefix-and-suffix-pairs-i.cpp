class Solution {
public:
    bool isPrefixAndSuffix(string a, string b){
        int m = a.size();
        int n = b.size();
        if(m>n) return false;
        int i=0, j=0;

        while(i<m && i<n){
            if(a[i] == b[j]){
                i++;
                j++;
            }
            else{
                return false;
            }
        }

        i=m-1;
        j=n-1;
        while(i>=0 && j>=0){
            if(a[i] == b[j]){
                i--;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for(int i=0; i<words.size(); i++){
            for(int j=i+1; j<words.size(); j++){
                if(isPrefixAndSuffix(words[i], words[j])){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};