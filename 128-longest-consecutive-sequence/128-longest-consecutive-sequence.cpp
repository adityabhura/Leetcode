class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        
        map<int,int> mp;
        int small=INT_MAX;
        for(int i=0;i<n;i++){
            small=min(small,nums[i]);
            mp[nums[i]]++;
        }
        int prev=small;
        int count=1;
        int ans=0;
        for(auto it: mp){
            //if(it.first==small)continue;
            if(it.first==prev+1){
                count++;
            }else{
                count=1;
            }
            prev=it.first;
            ans=max(count,ans);
        }
        return ans;
    }
};