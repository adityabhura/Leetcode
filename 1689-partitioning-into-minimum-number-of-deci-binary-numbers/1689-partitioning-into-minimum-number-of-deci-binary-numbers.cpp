class Solution {
public:
    int minPartitions(string n) {
        int size=n.size();
        char max='0';
        for(int i=0;i<size;i++){
            if(n[i]>max){
                max=n[i];
            }
        }
        return max-48;
    }
};