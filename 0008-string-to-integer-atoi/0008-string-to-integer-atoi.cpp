class Solution {
public:
    int solve(string s, int i, int num, int sign){
        if(i>=s.size()||s[i]<'0'||s[i]>'9'){
            return num*sign;
        }
        int digit =s[i]-'0';
        if (num > (2147483647LL - digit) / 10) {
            if (sign == 1)
                return 2147483647;
            else
                return -2147483648LL;
        }
        num=num*10+digit;
        return solve(s, i + 1, num, sign);
    }
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        int num=0;
        while(i<s.size()&&s[i]==' '){
            i++;
        }
        if(i<s.size()&&s[i]=='-'){
            sign=-1;
            i++;
        }else if(i<s.size()&&s[i]=='+'){
            i++;
        }
        return solve(s,i,num,sign);
        
    }
};