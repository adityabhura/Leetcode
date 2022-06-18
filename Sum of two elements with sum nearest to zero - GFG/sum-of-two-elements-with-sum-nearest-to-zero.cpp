// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        static bool comp(int a,int b)
       {
           return abs(a)<abs(b);
       }
       int closestToZero(int a[], int n)
       {
           sort(a,a+n,comp);
           int i,sum=INT_MAX;
           for(i=1;i<n;i++)
               if(abs(a[i]+a[i-1])<abs(sum))
                   sum=a[i]+a[i-1];
               else if(abs(a[i]+a[i-1])==abs(sum))
                   sum=max(sum,a[i]+a[i-1]);
           return sum;
       }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends