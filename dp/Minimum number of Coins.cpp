// https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>cur={2000,500,200,100,50,20,10,5,2,1},ans;
        int it=0;
        while(N){
            if(cur[it]<=N){
                N-=cur[it];
                ans.push_back(cur[it]);
            }
            else it++;
        }
        return ans;
    }
};
