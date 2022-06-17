class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]=i;
        // }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int k=target-nums[i];
            if(m.find(k)!=m.end()){
                ans.push_back(m[k]);
                ans.push_back(i);
            }
            m[nums[i]]=i;
        }
        return ans;
    }
};