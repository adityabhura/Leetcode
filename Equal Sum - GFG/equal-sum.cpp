// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
        int i=0,j=n-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int s=0;
        bool c=false;
        for(int i=0;i<n;i++){
            if(sum-s-arr[i]==s){
                c=true;
                break;
            }
            s+=arr[i];
        }
        if(c==true)return "YES";
        else return "NO";
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.equilibrium(a, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends