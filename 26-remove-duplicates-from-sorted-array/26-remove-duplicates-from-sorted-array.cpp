class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int count=1;
        int idx=1;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]!=a[i+1]){
                a[idx]=a[i+1];
                idx++;
                count++;
            }
        }
        return count;
    }
};