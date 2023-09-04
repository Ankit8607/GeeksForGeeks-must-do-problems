// https://practice.geeksforgeeks.org/problems/cutted-segments1642/1

class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int>dp(n+1,0);
        if(x<=n) dp[x]=1;
        if(y<=n) dp[y]=1;
        if(z<=n) dp[z]=1;
        for(int i=1;i<=n;i++){
            if(i-x>=0 and dp[i-x]>0) dp[i]=max(dp[i],1+dp[i-x]);
            if(i-y>=0 and dp[i-y]>0) dp[i]=max(dp[i],1+dp[i-y]);
            if(i-z>=0 and dp[i-z]>0) dp[i]=max(dp[i],1+dp[i-z]);
        }
        return dp[n];
    }
};
