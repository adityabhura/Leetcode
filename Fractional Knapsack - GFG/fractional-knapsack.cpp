// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class Solution

{
   public:
   //Function to get the maximum total value in the knapsack.
   
   double fractionalKnapsack(int w, Item arr[], int n)
   {
       vector<pair<double, int>> ratio(n);
       for(int i=0;i<n;i++){
           ratio[i].first = (double)(arr[i].value)/(double)arr[i].weight;
           ratio[i].second = i;
       }
       sort(ratio.begin(), ratio.end());
       double ans = 0;
       for(int i=n-1;i>=0;i--){
           if(!w) break;
           double weight = arr[ratio[i].second].weight;
           double value = arr[ratio[i].second].value;
           if(weight<=w){
               ans+=value;
               w-=weight;
           }
           else {
               ans+=(w/weight)*value;
               break;
           }
       }
       return ans;
   }
       
};

// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends