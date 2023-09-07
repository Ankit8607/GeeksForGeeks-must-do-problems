// https://practice.geeksforgeeks.org/problems/circle-of-strings4530/1

class Solution
{
    public:
    
    int dfs(int node,vector<int>g[],vector<int>&vis){
        vis[node]=1;
        int ans=g[node].size();
        for(auto i:g[node]) if(!vis[i]) ans+=dfs(i,g,vis);
        return ans;
    }
    
    int isCircle(int n, vector<string> A)
    {
        vector<int>g[26],indeg(26,0),outdeg(26,0);
        for(auto i:A){
            g[i.front()-'a'].push_back(i.back()-'a');
            indeg[i.back()-'a']++;
            outdeg[i.front()-'a']++;
        }
        for(int i=0;i<26;i++){
            if(indeg[i]!=outdeg[i]) return false;
        }
        vector<int>vis(26,0);
        return n==dfs(A[0][0]-'a',g,vis);
    }
};
