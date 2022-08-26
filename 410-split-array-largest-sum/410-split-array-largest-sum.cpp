class Solution {
public:
    
    bool check(vector<int>& nums, int m,int mid){
        int s=1;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid)return false;
            res+=nums[i];
            if(res>mid){
                res=nums[i];
                s++;
            }
            
        }
        //s++;
        if(s>m)return false;
        return true;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int low=INT_MIN,high=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            low=max(low,nums[i]);
            high+=nums[i];
        }
        
        while(low<=high){
            int mid=(low+high)/2;
            
            if(check(nums,m,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            
        }
        return ans;
    }
};