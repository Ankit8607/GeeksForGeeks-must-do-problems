// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        int l=0,r=n-1,lmx=arr[0],rmx=arr[n-1];
        long long ans=0;
        while(l<r){
            if(arr[l]<=arr[r]){ 
                ans+=max(0,min(rmx,lmx)-arr[l]);
                l++;
                lmx=max(lmx,arr[l]);
            }
            else{
                ans+=max(0,min(rmx,lmx)-arr[r]);
                r--;
                rmx=max(rmx,arr[r]);
            }
        }
        return ans;
    }
};
