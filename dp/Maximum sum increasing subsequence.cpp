// https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

class Solution{
	public:
	
	int rec(int level,int last,int arr[],int n,vector<vector<int>>&dp){
	    if(level==n) return 0;
	    
	    if(dp[level][last]!=-1) return dp[level][last];
	    
	    int ans=rec(level+1,last,arr,n,dp);
        if(last==0 || arr[last-1]<arr[level]) ans=max(ans,arr[level]+rec(level+1,level+1,arr,n,dp));
	    
	    return dp[level][last]=ans;
	}
	
	int maxSumIS(int arr[], int n)  
	{  
	    vector<vector<int>>dp(n,vector<int>(n+1,-1));
	    return rec(0,0,arr,n,dp);
	}  
};
