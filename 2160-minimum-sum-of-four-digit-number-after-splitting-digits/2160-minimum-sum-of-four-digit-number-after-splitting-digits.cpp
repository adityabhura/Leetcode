class Solution {
public:
    int minimumSum(int num) {
        vector<int> a;
        while(num){
            a.push_back(num%10);
            num/=10;
        }
        sort(a.begin(),a.end());
        int f=0,s=0;
        for(int i=0;i<a.size();i++){
            if(i%2==0)f=f*10+a[i];
            else s=s*10+a[i];
        }
        return f+s;
    }
};