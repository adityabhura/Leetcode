class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        //return ans;
        sort(nums.begin(),nums.end());
        vector<int> temp;
        set<vector<int>> s;
        help(nums,n,0,temp,s);
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
    void help(vector<int> &nums,int n,int index,vector<int> temp,set<vector<int>> &s){
        if(index==n){
            //cout<<"a";
            s.insert(temp);
            return;
        }
        temp.push_back(nums[index]);
        help(nums,n,index+1,temp,s);
        temp.pop_back();
        help(nums,n,index+1,temp,s);
    }
};