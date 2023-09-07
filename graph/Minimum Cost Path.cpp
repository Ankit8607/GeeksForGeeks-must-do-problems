// https://practice.geeksforgeeks.org/problems/minimum-cost-path3833/1

class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int N=grid.size(),M=grid[0].size();
        vector<vector<int>>vis(N,vector<int>(M,1e9));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        q.push({grid[0][0],{0,0}});
        vis[0][0]=grid[0][0];
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
        while(!q.empty()){
            int i=q.top().second.first,j=q.top().second.second,wt=q.top().first;
            q.pop();
            for(int k=0;k<4;k++){
                int x=i+dx[k];
                int y=j+dy[k];
                if(x>=0 and y>=0 and x<N and y<M and vis[x][y]>wt+grid[x][y]){
                    vis[x][y]=wt+grid[x][y];
                    q.push({wt+grid[x][y],{x,y}});
                }
            }
        }
        return vis[N-1][M-1];
    }
};
