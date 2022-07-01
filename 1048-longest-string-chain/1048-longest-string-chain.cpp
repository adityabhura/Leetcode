class Solution {
public:
    static bool cmp(string a, string b){
        if(a.length() < b.length())
            return true;
        else
            return false;
    }
    int longestStrChain(vector<string>& words) {
        int n= words.size();
        int ans=1;
        sort(words.begin(), words.end(), cmp);
        
        map<string, int> mp;
        int ilen= words[0].length();
        mp.insert({words[0], 1});
        
        for(int i=1; i<n; i++){
            
            if(words[i].size()==ilen)
                mp.insert({words[i], 1});
            
            else{
                int this_ans=1;
                for(int j=0; j<words[i].size(); j++){
                    
                    string curr= words[i];
                    curr.erase(curr.begin()+j);
                    if(mp.count(curr)>0){
                        this_ans= max(this_ans, mp[curr]+1);
                    }
                }
                mp.insert({words[i], this_ans});
                ans= max(ans, this_ans);
            }
        }
        for(auto x: mp){
            cout<<x.first<<" "<<x.second;
            cout<<"\n";
        }
        
        return ans;
    }
};