class Solution {
public:
    void sum(vector<int>&candidates,int target, int index,vector<int>&current,vector<vector<int>>& ans){
        sort(candidates.begin(),candidates.end());
        if(target==0){
            ans.push_back(current);
            return;
        }
        if(index>=candidates.size()||target<0){
            return;
        }
        current.push_back(candidates[index]);
        sum(candidates,target-candidates[index],index+1,current,ans);
        current.pop_back();
        int nextIndex = index + 1;

while(nextIndex < candidates.size() &&
      candidates[nextIndex] == candidates[index]) {
    nextIndex++;
}

sum(candidates, target, nextIndex, current, ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>current;
        vector<vector<int>> ans;
        sum(candidates,target,0,current,ans);
        return ans;
    }
};