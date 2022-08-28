class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        if(a.size()==1){
            if(a[0]==0)
                return 0;
            else{
                return 1;
            }
        }
        int max=0,last=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                max++;
                if(max>=last){
                    last=max;
                }
            }else{
                max=0;   
            }
            
        }
        return last;
    }
};