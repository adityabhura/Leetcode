class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        
        map<int,int> r;
        map<int,int> c;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(r.find(i)!=r.end())m[i][j]=0;
                if(c.find(j)!=c.end())m[i][j]=0;
            }
        }
        
    }
};