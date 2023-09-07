// https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1

class Solution
{
	public:
	
	void dfs(int node,vector<vector<int>>&g,stack<int>&st,vector<bool>&vis){
	    vis[node]=1;
	    for(auto i:g[node]){
	        if(!vis[i]) dfs(i,g,st,vis);
	    }
	    st.push(node);
	}
	void dfs2(int node,vector<vector<int>>&g,vector<bool>&vis){
	    vis[node]=1;
	    for(auto i:g[node]) if(!vis[i]) dfs2(i,g,vis);
	}
	
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int n, vector<vector<int>>& adj)
    {
        vector<bool>vis(n,false);
        stack<int>st;
        for(int i=0;i<n;i++){
            if(!vis[i])
                dfs(i,adj,st,vis);
        }
        vector<vector<int>>g(n);
        for(int i=0;i<n;i++){
            for(auto j:adj[i]){
                g[j].push_back(i);
            }
        }
        int ans=0;
        vis.assign(n,false);
        while(!st.empty()){
            int node=st.top(); st.pop();
            if(!vis[node]){
                ans++;
                dfs2(node,g,vis);
            }
        }
        return ans;
    }
};
