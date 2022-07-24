class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        priority_queue<pair<int,int>>pq;
        int n=arr.size();
        for(int i=0;i<n;i++){
            //(arr[i]==x)continue;
            pq.push({abs(arr[i]-x),arr[i]});
           // cout<<pq.top().second<<endl;
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(pq.empty()==false){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        //reverse(ans.begin(),ans.end());
        sort(ans.begin(),ans.end());
        return ans;
    }
};