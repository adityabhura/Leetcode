class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(!matrix.size()) return false;
        int i=0,j=(m*n)-1;
        
        while(i<=j){
            int mid=(i+(j-i)/2);
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target){
                return true;
            }else if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        
        return false;
    }
};