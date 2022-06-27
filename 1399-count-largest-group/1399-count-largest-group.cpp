class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> mp;
        int maxi=0;
        for(int i=1;i<=n;i++){
            int k=i,sum=0;
            while(k){
                sum+=k%10;
                k=k/10;
            }
            mp[sum]++;
            maxi=max(mp[sum],maxi);
        }
        int cnt=0;
        for(auto i:mp) if(i.second==maxi) cnt++;
        return cnt;
    }
};