class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int res=a[0];
        int maxEnding=a[0];
        for(int i=1;i<a.size();i++){
            maxEnding=max(maxEnding+a[i],a[i]);
            res=max(maxEnding,res);
        }
        return res;
    }
};