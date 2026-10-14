class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int length =nums.size();
        int n=0;
        for(int i =0;i<length;i++){
            n=n^nums[i];
        }
        return n;
    }
};