class Solution {
public:
    int help(vector<int>& nums,int x,int i){
        if(i<0)return x;
        return help(nums,x^nums[i],i-1)+help(nums,x,i-1);
    }
    int subsetXORSum(vector<int>& nums) {
        int ans=help(nums,0,nums.size()-1);
        return ans;
    }
};