class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1;
        while(n){
            int k=n%10;
            sum+=k;
            pro*=k;
            n/=10;
        }
        return pro-sum;
    }
};