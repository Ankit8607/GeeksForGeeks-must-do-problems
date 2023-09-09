// https://practice.geeksforgeeks.org/problems/combination-sum-ii-1664263832/1?page=1&sortBy=newest&query=page1sortBynewest

class Solution{
public:
    vector<vector<int>> res;
    void solve(int idx, vector<int> &candidates, int target, int n, vector<int> &curr) {
        
        if(target == 0) {
            res.push_back(curr);
            return;
        }
        if(idx == n) {
            return;
        }
        if(target<0) return;
        
        int i = idx+1;
        while(i<n && candidates[i]==candidates[idx]) i++;
        if(candidates[idx]<=target) {// le sakte hain
            curr.push_back(candidates[idx]);
            solve(idx+1, candidates, target-candidates[idx], n, curr);
            curr.pop_back();
        }
        solve(i, candidates, target, n, curr);
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        sort(arr.begin(), arr.end());
        vector<int> curr;
        solve(0, arr, k, n, curr);
        return res;
    }
};
