class Solution {
public:
    void help(vector<vector<int>> &ans,vector<int>& nums,int i,vector<int>& temp){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        help(ans,nums,i+1,temp);
        temp.pop_back();
        help(ans,nums,i+1,temp);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        help(ans,nums,0,temp);
        return ans;
    }
};