// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       vector<int>ans;
       ans.push_back(a[0]);
       for(int i=1;i<n;i++){
           if(a[i]>ans.back()) ans.push_back(a[i]);
           else{
               auto it=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
               ans[it]=a[i];
           }
       }
       return ans.size();
    }
};
