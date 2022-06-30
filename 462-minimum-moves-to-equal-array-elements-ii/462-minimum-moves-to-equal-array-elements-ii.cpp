class Solution {
public:
    int minMoves2(vector<int>& nums) {
        //long long int sum=0;
        sort(nums.begin(),nums.end());
        long long int m=(nums.size()-1)/2;
        //long long int avg=sum/nums.size();
        long long int count=0;
        for(int i=0;i<nums.size();i++){
            count+=abs(nums[m]-nums[i]);
        }
        return count;
    }
};