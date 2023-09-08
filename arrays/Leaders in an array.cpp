// https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        vector<int>ans;
        int last=arr[n-1];
        ans.push_back(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            if(arr[i]<last) continue;
            ans.push_back(arr[i]);
            last=arr[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
