class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mp;
        
        for(auto it: magazine){
            mp[it]++;
            
        }
        
        for(int i=0;i<ransomNote.size();i++){
            if(mp.find(ransomNote[i])!=mp.end()){
                mp[ransomNote[i]]--;
                if(mp[ransomNote[i]]==0)
                    mp.erase(ransomNote[i]);
            }
            else
                return false;
        }
        return true;
    }
};