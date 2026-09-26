class Solution {
public:
    void solve(int k, int target, int start,
               vector<int>& current,
               vector<vector<int>>& ans) {

        // Base case
        if (current.size() == k) {
            if (target == 0) {
                ans.push_back(current);
            }
            return;
        }

        // Try numbers from start to 9
        for (int i = start; i <= 9; i++) {

            // If i is greater than target, no need to continue
            if (i > target)
                break;

            current.push_back(i);

            solve(k, target - i, i + 1, current, ans);

            current.pop_back(); // backtracking
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> current;

        solve(k, n, 1, current, ans);

        return ans;
    }
};