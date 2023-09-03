// https://practice.geeksforgeeks.org/problems/minimize-the-heights-i/1

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        arr[0]+=k;
        for(int i=1;i<n;i++){
            ans=min(ans,max(arr[i-1],arr[n-1]-k)-min(arr[0],arr[i]-k));
            arr[i]+=k;
        }
        return ans;
    }
};
