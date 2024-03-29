class Solution {
public:
    
    void help(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int freq[]){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                freq[i]=1;
                temp.push_back(nums[i]);
                help(nums,ans,temp,freq); 
                freq[i]=0;
                temp.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) 
            freq[i]= 0;
        help(nums,ans,temp,freq); 
        return ans;
    }
};