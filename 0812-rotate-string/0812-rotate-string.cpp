class Solution {
public:
    bool rotateString(string s, string goal) {
        string subStr;
        string subStr2;
        string output;
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            subStr=s.substr(i);
            subStr2=s.substr(0,i);
            output=subStr+subStr2;
             if(output==goal){
            return true;
        }
        }
        return false;
    }
    
};