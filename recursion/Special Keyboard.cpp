// https://practice.geeksforgeeks.org/problems/special-keyboard3018/1

class Solution{
public:

    long long int optimalKeys(int N){
        vector<long long>dp(N+1,0);
        for(int i=1;i<=N;i++){
            dp[i]=1+dp[i-1];
            for(int j=i;j>2;j--) dp[i]=max(dp[i],dp[j-3]*(i-j+2));
        }
        return dp[N];
    }
};
