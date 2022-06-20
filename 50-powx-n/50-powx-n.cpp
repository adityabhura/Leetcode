class Solution {
public:
double solve_recursive(double x, int n){
    
    if (n == 0) return 1;
    if (n == 1) return x;
    double ans = solve_recursive(x, n / 2);

    if (n % 2 == 0){
        return ans * ans;
    }else{
        return x * ans * ans;
    }
}
    
double myPow(double x, int n){
    
    if (n < 0){
        return 1 / solve_recursive(x, n);
    }else{
        return solve_recursive(x, n);
    }
 }
};