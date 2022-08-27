class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                long int newTarget = (long int)target - nums[i] - nums[j];
                int start = j + 1, end = n - 1;
                while (start < end){
                    long long sum = nums[start] + nums[end];
                    if (sum == newTarget){
                        st.insert({nums[i], nums[j], nums[start], nums[end]});
                        start++;
                        end--;
                    }
                    else if (sum < newTarget) start++;
                    else end--;
                }
            }
        }
        for (auto it : st) ans.push_back(it);
        return ans;
    }
};