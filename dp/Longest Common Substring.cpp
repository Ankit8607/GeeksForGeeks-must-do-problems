// https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1

class Solution{
    public:
    int longestCommonSubstr (string s, string t, int n, int m)
    {
         vector<vector<int>>table(n+1,vector<int>(m+1,0));

        int res = 0;
    
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1] == t[j-1]) {table[i][j] = 1 + table[i-1][j-1];
    
                res = max(res,table[i][j]);}
            }
        }
    
        return res;
    }
};
