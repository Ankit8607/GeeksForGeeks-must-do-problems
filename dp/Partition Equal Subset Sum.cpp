// https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

class Solution{
public:
    
    int rec(int level,int sum, int &tot,int arr[],int n,vector<vector<int>>&dp){
        if(level==n) return sum==(tot/2);
        
        if(dp[level][sum]!=-1) return dp[level][sum];
        
        return dp[level][sum]=rec(level+1,sum,tot,arr,n,dp) | rec(level+1,sum+arr[level],tot,arr,n,dp);
    }

    int equalPartition(int n, int arr[])
    {
        int sum=0;
	    for(int i=0;i<n;i++) sum+=arr[i];
	    if(sum%2) return 0;
	    vector<vector<int>>dp(n,vector<int>(sum+1,-1));
	    return rec(0,0,sum,arr,n,dp);
    }
};
