// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
       int activitySelection(vector<int> start, vector<int> end, int n)
   {
       vector<pair<int,int>>v;
       for(int i  = 0 ; i < n;i++){
           v.push_back({end[i],start[i]});}
       sort(v.begin(),v.end());
       int ans = 1 ;
       int c = v[0].first;
       for(int i = 1 ; i < n;i++){
           if(v[i].second>c){
               ans++;
               c=v[i].first;
           }}
       return ans;
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends