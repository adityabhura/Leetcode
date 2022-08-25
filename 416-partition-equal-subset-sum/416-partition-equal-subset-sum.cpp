class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++)sum+=arr[i];
        if(sum%2!=0)return false;
        sum/=2;
        
        bool dp[n+1][sum+1];
        for(int i=0;i<arr.size()+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)dp[i][j]=false;
                if(j==0)dp[i][j]=true;
            }
        }
        for(int i=1;i<arr.size()+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1]<=j)dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                else if(arr[i-1]>j)dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};