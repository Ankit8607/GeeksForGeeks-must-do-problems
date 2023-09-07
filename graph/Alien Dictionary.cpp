// https://practice.geeksforgeeks.org/problems/alien-dictionary/1

class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        //code here
        
        vector<int> adj[K];
        int indegree[K] = {0};
        
        for(int i=0;i<N-1;i++){
            string s1 = dict[i];
            string s2 = dict[i+1];
            
            int l = min(s1.size(),s2.size());
            
            for(int j=0;j<l;j++){
                if(s1[j]!=s2[j]){
                    adj[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        
        for(int i=0;i<K;i++){
            for(auto x:adj[i])
                indegree[x]++;
        }
        
        queue<int> q;
        
        for(int i=0;i<K;i++){
            if(indegree[i]==0) q.push(i);
        }
        vector<int> res;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            res.push_back(node);
            
            for(auto x:adj[node]){
               indegree[x]--;
               if(indegree[x]==0) q.push(x);
            }
        }
        
        string s = "";
        for(int i=0;i<res.size();i++){
            s.push_back(res[i]+'a');
        }
        return s;
    }
};
