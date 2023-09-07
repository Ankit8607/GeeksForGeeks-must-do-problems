// https://practice.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        if(A[0][0]==0) return -1;
        vector<vector<int>>vis(N,vector<int>(M,-1));
        queue<pair<int,int>>q;
        vis[0][0]=0;
        q.push({0,0});
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
        while(!q.empty()){
            int i=q.front().first,j=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int x=i+dx[k];
                int y=j+dy[k];
                if(x>=0 and y>=0 and x<N and y<M and A[x][y] and vis[x][y]==-1){
                    vis[x][y]=1+vis[i][j];
                    q.push({x,y});
                }
            }
        }
        return vis[X][Y];
    }
};
