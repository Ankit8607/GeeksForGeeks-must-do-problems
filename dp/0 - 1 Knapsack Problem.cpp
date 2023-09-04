// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int rec(int level,int w, int wt[],int val[],int n,vector<vector<int>>&dp){
        if(level==n) return 0;
        
        if(dp[level][w]!=-1) return dp[level][w];
        
        int ans=rec(level+1,w,wt,val,n,dp);
        if(w>=wt[level]) ans=max(ans,val[level]+rec(level+1,w-wt[level],wt,val,n,dp));
        
        return dp[level][w]=ans;
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n,vector<int>(W+1,-1));
       return rec(0,W,wt,val,n,dp);
    }
};
