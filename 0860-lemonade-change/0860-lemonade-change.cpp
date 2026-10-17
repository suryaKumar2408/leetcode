class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveInHand =0;
        int tenInHand =0;
        for(int i=0;i<bills.size();i++){
            if (bills[i]==5){
                fiveInHand++;
            }
            else if(bills[i]==10){
                if(fiveInHand>=1){
                    fiveInHand --;
                    tenInHand ++;
                }else{
                    return false;
                }
            }
            else{
                if(tenInHand>=1&&fiveInHand>=1){
                    tenInHand --;
                    fiveInHand --;
                }else if(fiveInHand>=3){
                    fiveInHand -= 3;
                }else{
                    return false;
                }
            }

        }
        return true;
    }
};