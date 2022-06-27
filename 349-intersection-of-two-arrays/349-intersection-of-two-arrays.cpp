class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        vector<int>v;
        unordered_set<int>s(nums1.begin(),nums1.end());
        int n1=nums2.size();
        for(int i=0;i<n1;i++){
            if(s.count(nums2[i])){
                v.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return v;
        
    }
};