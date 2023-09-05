// https://practice.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1

class Solution{
    public:
    int ans=0;
    int rec(int l,int r,int arr[],int n,vector<vector<int>>&dp){
        if(l>r) return 0;
        
        if(dp[l][r]!=-1) return dp[l][r];
        
        int left=arr[l]-rec(l+1,r,arr,n,dp),right=arr[r]-rec(l,r-1,arr,n,dp);
        
        return dp[l][r]=max(left,right);
    }
    
    long long maximumAmount(int arr[], int n){
        ans=0;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        rec(0,n-1,arr,n,dp);
        int l=0,r=n-1;
        while(l<=r){
            if(arr[l]-dp[l+1][r]>=arr[r]-dp[l][r-1]) ans+=arr[l++];
            else ans+=arr[r--];
            if(l==r) break;
            if(arr[l]-dp[l+1][r]>=arr[r]-dp[l][r-1]) l++;
            else r--;
        }
        return ans;
    }
};
