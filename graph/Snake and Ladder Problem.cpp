// https://practice.geeksforgeeks.org/problems/snake-and-ladder-problem4816/1

class Solution{
public:
    int minThrow(int N, int arr[]){
        vector<int>next(31),dist(31,1e9);
        for(int i=1;i<31;i++) next[i]=i;
        for(int i=0;i<N;i++){
            next[arr[2*i]]=arr[2*i+1];
        }
        
        queue<int>q;
        q.push(1);
        dist[1]=0;
        while(!q.empty()){
            int node=q.front(); q.pop();
            for(int i=1;i<=6;i++){
                if(node+i<31 and dist[next[node+i]]>dist[node]+1){
                    dist[next[node+i]]=1+dist[node];
                    q.push(next[node+i]);
                }
            }
        }
        return dist[30];
    }
};
