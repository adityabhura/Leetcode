class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int n=arr.size();
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        int max1=INT_MIN;
        for(int i=0;i<k;i++){
            pq.push({arr[i], i});
            //max1=max(max1,arr[i]);
        }
        ans.push_back(pq.top().first);
        for(int i=k;i<n;i++){
             pq.push({arr[i], i});
           while (!pq.empty() && pq.top().second<=(i-k)){
               pq.pop();
           }
           ans.push_back(pq.top().first);
        }
        return ans;
    }
};