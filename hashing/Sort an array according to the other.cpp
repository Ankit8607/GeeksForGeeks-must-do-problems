// https://practice.geeksforgeeks.org/problems/relative-sorting4323/1

class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        map<int,int>mp;
        for(auto i:A1) mp[i]++;
        vector<int>ans;
        for(int i=0;i<M;i++){
            if(mp.count(A2[i])){
                for(int j=0;j<mp[A2[i]];j++) ans.push_back(A2[i]);
                mp[A2[i]]=0;
            } 
        }
        for(auto i:mp){
            while(i.second>0) i.second--,ans.push_back(i.first);
        }
        return ans;
    } 
};
