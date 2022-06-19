class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        bool jc=false,ic=false;
        vector<int> a;
        while(i<=j && a.size()<2){
            if(nums[i]>target || nums[j]<target){
                break;
            }
            if(nums[j]>target){
                j--;
            }
            if(nums[i]<target){
                i++;
            }
            if(nums[j]==target && !jc){
                a.push_back(j);
                jc=true;
            }
            if(nums[i]==target && !ic){
                a.push_back(i);
                ic=true;
            }
        }
        if(a.size()==0){
            a.push_back(-1);
                a.push_back(-1);
        }
        sort(a.begin(),a.end());
        return a;
    }
};