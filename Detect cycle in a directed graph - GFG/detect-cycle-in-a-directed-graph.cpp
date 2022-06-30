// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
         int indegree[v]={0};
	 
	    for(int i=0;i<v;i++){
	        for(int j=0;j<adj[i].size();j++){
	            indegree[adj[i][j]]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0;i<v;i++){
	        if(indegree[i]==0)q.push(i);
	    }
	    vector<int> ans;
	    int count=0;
	    while(q.empty()==false){
	        int u=q.front();
	        q.pop();
	        ans.push_back(u);
	        for(int x:adj[u]){
	            indegree[x]--;
	            if(indegree[x]==0){
	                q.push(x);
	                count++;
	            }
	        }
	    }
	    //if(ans.size()==v)
	   // for(int i=0;i<ans.size();i++){
	   //     cout<<ans[i]<<" ";
	   // }
	    //cout<<ans.size();
	    return (ans.size()!=v);
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends