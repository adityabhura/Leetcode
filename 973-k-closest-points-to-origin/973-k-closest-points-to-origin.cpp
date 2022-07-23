class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue <pair<int,vector<int>>>pq;
        for(int i=0;i<points.size();i++){
            int sq=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            pq.push({sq,{points[i][0],points[i][1]}});
            if(pq.size()>k){pq.pop();}
        }
        while(pq.empty()==false){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};