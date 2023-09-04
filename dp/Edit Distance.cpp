// https://practice.geeksforgeeks.org/problems/edit-distance3702/1

class Solution {
  public:
  
    int rec(int l,int r,string &a,string &b,int n,int m, vector<vector<int>>&dp){
        if(l==n and r==m) return 0;
        if(l==n || r==m) return n-l+m-r;
        
        if(dp[l][r]!=-1) return dp[l][r];
        
        int ans=1e9;
        if(a[l]==b[r]) ans=rec(l+1,r+1,a,b,n,m,dp);
        else ans=1+min({rec(l+1,r,a,b,n,m,dp),rec(l,r+1,a,b,n,m,dp),rec(l+1,r+1,a,b,n,m,dp)});
        
        return dp[l][r]=ans;
    }
  
    int editDistance(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return rec(0,0,s,t,n,m,dp);
    }
};
