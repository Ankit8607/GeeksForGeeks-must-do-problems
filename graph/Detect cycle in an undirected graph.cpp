// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
  
    bool rec(int node,int par,vector<int> g[],vector<int>&vis){
        if(vis[node]) return 1;
        vis[node]=1;
        
        for(auto child:g[node]) if(child != par and rec(child,node,g,vis)) return 1;
        return 0;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int n, vector<int> adj[]) {
        vector<int>vis(n,0);
        for(int i=0;i<n;i++) if(!vis[i] and rec(i,i,adj,vis)) return 1;
        return 0;
    }
};
