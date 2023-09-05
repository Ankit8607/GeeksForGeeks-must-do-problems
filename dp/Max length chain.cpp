// https://practice.geeksforgeeks.org/problems/max-length-chain/1

class Solution{
public:
    /*You are required to complete this method*/
    int maxChainLen(struct val p[],int n){
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++) arr.push_back({p[i].second,p[i].first});
        sort(arr.begin(),arr.end());
        int ans=1,last=arr[0].first;
        for(int i=1;i<n;i++) if(arr[i].second>last) ans++,last=arr[i].first;
        return ans;
    }
};
