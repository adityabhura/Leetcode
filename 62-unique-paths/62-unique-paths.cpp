class Solution {
public:
    int uniquePaths(int m, int n) {
        long long int dp[m+1][n+1];
        for(int i=0;i<m+1;i++)
            for(int j=0;j<n+1;j++)
                if(i==0||j==0)
                    dp[i][j]=1;
        
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
            
        return dp[m-1][n-1];
        
    }
};