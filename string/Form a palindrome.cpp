// https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1

class Solution{
  public:
  
    int rec(int l,int r,string &s,vector<vector<int>>&dp){
        if(l>r) return 0;
        
        if(dp[l][r]!=-1) return dp[l][r];
        
        int ans=1e9;
        if(s[l]==s[r]) ans=rec(l+1,r-1,s,dp);
        else ans=1+min(rec(l+1,r,s,dp),rec(l,r-1,s,dp));
        
        return dp[l][r]=ans;
    }
  
    int countMin(string s){
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return rec(0,n-1,s,dp);
    }
};
