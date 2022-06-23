class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map <char,int>m;
        int n=jewels.size();
        for(auto s: jewels){
            m[s]++;
        }
        int count=0;
        for(auto s: stones){
            if(m.find(s)!=m.end())count++;
        }
        return count;
    }
};