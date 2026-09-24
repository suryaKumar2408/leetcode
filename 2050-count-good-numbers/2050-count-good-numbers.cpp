class Solution {
public:
    long long power(long long base, long long exp) {
        long long MOD = 1000000007;

        if (exp == 0)
            return 1;

        long long half = power(base, exp / 2);

        if (exp % 2 == 0) {
            return (half * half) % MOD;
        }

        return (half * half % MOD * base) % MOD;
    }
    int countGoodNumbers(long long n) {
        int x=1000000007;
        long long even =(n+1)/2;
        long long odd =(n/2);
        long long evenp=power(5,even)%x;
        long long oddp=power(4,odd)%x;
        return (evenp*oddp)%x;

        
    }
};