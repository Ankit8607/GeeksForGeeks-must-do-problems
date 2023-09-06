// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

class Solution {
  public:
    
    bool rec(int node,int par,vector<int> g[],vector<int>&vis){
        if(vis[node]) return vis[node]==2;
        vis[node]=2;
        
        for(auto child:g[node]) if(rec(child,node,g,vis)) return 1;
        vis[node]=1;
        return 0;
    }
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int n, vector<int> adj[]) {
        vector<int>vis(n,0);
        for(int i=0;i<n;i++) if(!vis[i] and rec(i,i,adj,vis)) return 1;
        return 0;
    }
};
