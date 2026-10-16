class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int sLength=s.size();
        int gLength=g.size();
        int sPointer=0;
        int gPointer=0;
        int count =0;
        while (sPointer < sLength && gPointer < gLength){
            if(g[gPointer]<=s[sPointer]){
                sPointer++;
                gPointer++;
                count++;
            }else{
                sPointer++;
            }
        }
        return count;
    }
};