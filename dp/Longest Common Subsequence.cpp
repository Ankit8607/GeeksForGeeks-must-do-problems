// https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1

class Solution
{
    public:
    
    int rec(int l,int r,int n,int m,string &a,string &b,vector<vector<int>>&dp){
        if(l==n || r==m) return 0;
        
        if(dp[l][r]!=-1) return dp[l][r];
        
        int ans=0;
        if(a[l]==b[r]) ans=1+rec(l+1,r+1,n,m,a,b,dp);
        else ans=max(rec(l+1,r,n,m,a,b,dp),rec(l,r+1,n,m,a,b,dp));
        
        return dp[l][r]=ans;
    }
    
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return rec(0,0,n,m,s1,s2,dp);
    }
};
