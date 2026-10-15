class Solution {
public:
    bool isSubsequence(string s, string t) {
        int cnt=0;
        for(char a:t){
            if(cnt<t.size() && s[cnt] == a){
                cnt++;
            }
        }
        return s.size() == cnt;
    }
};