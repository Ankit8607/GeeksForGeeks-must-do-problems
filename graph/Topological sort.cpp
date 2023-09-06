// https://practice.geeksforgeeks.org/problems/topological-sort/1

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int n, vector<int> adj[]) 
	{
	    vector<int>indeg(n,0);
	    for(int i=0;i<n;i++){
	        for(auto node:adj[i]) indeg[node]++;
	    }
	    vector<int>ans;
	    queue<int>q;
	    for(int i=0;i<n;i++){
	        if(indeg[i]==0) ans.push_back(i),q.push(i);
	    }
	    while(!q.empty()){
	        int node=q.front(); q.pop();
	        for(auto child:adj[node]){
	            indeg[child]--;
	            if(indeg[child]==0){
	                ans.push_back(child);
	                q.push(child);
	            }
	        }
	    }
	    return ans;
	}
};
