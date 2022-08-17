class Solution {
public:
    int minSubArrayLen(int k, vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        int ans=INT_MAX;
        int i=0,j=0;
        //sort(arr.)
        while(j<n){
            sum+=arr[j];
            if(sum<k){
                j++;
            }else{
                cout<<sum<<" ";
                while(sum>=k){
                    sum-=arr[i];
                    i++;
                }
                ans=min(ans,j-i+2);
                cout<<";"<<sum;
                j++;
            }
        }
        if(ans==INT_MAX)return 0;
        // if(sum<k)return 0;
        return ans;
        
    }
};