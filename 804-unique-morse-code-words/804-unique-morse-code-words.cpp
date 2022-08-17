class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++){
            string s;
            for(int j=0;j<words[i].size();j++){
                s+=morse[words[i][j]-97];
            }
            mp[s]++;
        }
        return mp.size();
    }
};