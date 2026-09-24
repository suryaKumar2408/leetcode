class Solution {
public:
    double solve (double x, long long n){
        
        if(n==0){
            return 1;
        }
        double half=solve(x,n/2);
        if(n<0&&n%2!=0){
            return half*half/x;
        }
        if(n%2==0){
          return  half*half;
        }
        if(n%2!=0){
          return  half*half*x;
        }
        return 0;
    }
    double myPow(double x, int n) {
        return solve(x,n);
        
    }
};