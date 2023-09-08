// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> arr, int n){
        vector<vector<int>>ans;
        int l=-1;
        for(int i=0;i<n;i++){
            if(l==-1) l=i;
            else if(arr[i]<arr[i-1]){
                if(l!=i-1){
                    ans.push_back({l,i-1});
                    l=i;
                }
                else l=i;
            }
        }
        if(l!=-1 and l!=n-1) ans.push_back({l,n-1});
        return ans;
    }
};
