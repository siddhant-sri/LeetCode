class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<int> st;
        int cnt = 0;
        bool canType = true;
        for(auto it: brokenLetters){
            st.insert(it);
        }

        for(int i=0; i<=text.size(); i++){
            if(i == text.size() || text[i] == ' '){
                if(canType) cnt++;
                canType = true;
            }
            else if(st.find(text[i]) != st.end()){
                canType = false;
            }
        }
        return cnt;
    }
};