class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1) return intervals;
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back({intervals[0][0],intervals[0][1]});
        bool flag=false;
        int j=0;
        for(int i=1;i<n;i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            if(a>=ans[j][0]&&a<=ans[j][1]){

                b=(b>ans[j][1])?b:ans[j][1];
                ans[j][1]=b;
                //ans.push_back({intervals[i][0],intervals[i+1][1]});
                // if(i==n-2){
                //     flag=true;
                // }
                
            }else{
                 ans.push_back({intervals[i][0],intervals[i][1]});
                j++;
            }
        }
        // if(!flag){
        //     ans.push_back({intervals[n-1][0],intervals[n-1][1]});
        // }
        return ans;
    }
};