class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int k=shifts.size();
        int n=s.size();
        int mp[n+1];
        
        for(int i=0;i<n+1;i++){
           mp[i]=0;
            
        }        
        
        
        for(int i=0;i<k;i++){
            int a=shifts[i][0];
            int b=shifts[i][1];
            int d=shifts[i][2];
            
             if(d==0){
                    mp[a]--;
                    mp[b+1]++;
            }else{
                    mp[b+1]--;
                    mp[a]++;
            }
            
        }
        
        
        for(int i=1;i<=n;++i){
            mp[i]+=mp[i-1];
        }
        // // shift character
        for(int i=0;i<n;++i){
            int val=((s[i]-'a')+mp[i])%26;
            if(val<0) val+=26;
            s[i]='a'+val;
        }
        
        
            
        cout<<mp[n]<<endl;
        return s;
    }
};