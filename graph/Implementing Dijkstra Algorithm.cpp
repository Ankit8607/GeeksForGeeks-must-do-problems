// https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int S)
    {
        vector<int>vis(n,1e9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,S});
        vis[S]=0;
        while(!pq.empty()){
            int node = pq.top().second;
            pq.pop();
            for(auto i:adj[node]){
                if(vis[i[0]]>vis[node]+i[1]) vis[i[0]]=vis[node]+i[1],pq.push({i[1],i[0]});
            }
        }
        return vis;
    }
};
