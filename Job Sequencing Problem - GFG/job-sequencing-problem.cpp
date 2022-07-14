// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
class Solution 
{
   public:
   
   static bool comp(Job a,Job b){
       
       return a.profit>b.profit;
   }
   
   int findPos(int pos,vector<int> &parent){
       
       if(parent[pos]==0) return -1;
       if(parent[pos] == pos) return parent[pos] = pos-1;
       
       return parent[pos] = findPos(parent[pos],parent);
   }

   vector<int> JobScheduling(Job arr[], int n) 
   { 
        
        vector<int> parent(102);
        
        for(int i=0;i<=101;i++) parent[i] = i;
        
        sort(arr,arr+n,comp);
        
        int mx = 0, count = 0;
        
        for(int i=0;i<n;i++){
            
            int pos = findPos(arr[i].dead,parent);
            
            if(pos==-1) continue;
            
            mx += arr[i].profit;
            count++;
            
        }
        
        return {count,mx};
        
   } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends