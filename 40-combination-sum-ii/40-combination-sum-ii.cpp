class Solution {
public:
    
    void help (vector<int> &temp,vector<vector<int>> &ans,vector<int>& candidates,int target,int i,int n){
        
            if(target==0){
                ans.push_back(temp);
                return;
            }
         
        for(int j=i;j<n;j++){
            if(j>i && candidates[j]==candidates[j-1])continue;
            if(candidates[j]>target)break;
            
            
            temp.push_back(candidates[j]);
            help(temp,ans,candidates,target-candidates[j],j+1,n);
            temp.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        help(temp,ans,candidates,target,0,candidates.size());
        return ans;
    }
};