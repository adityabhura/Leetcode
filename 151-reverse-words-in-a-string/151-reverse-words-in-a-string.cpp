class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        reverse(s.begin(),s.end());
        int i=0;
        while(i < s.size()) {
            if (s[i] != ' ') {
                int subStrLen = i;
                
                while(subStrLen < s.size() and s[subStrLen] != ' ') {
                    subStrLen++;
                }
                
                reverse(s.begin() + i, s.begin() + subStrLen);
                i = subStrLen + 1;
                
            } else {
                s.erase(i, 1);
            }
        }
        if (s.back() == ' ') s.pop_back();
        return s;
    }
};