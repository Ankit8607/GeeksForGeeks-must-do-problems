// https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long merge(int l,int r,int mid,long long arr[], int n){
        vector<long long>v(r-l+1);
        long long ans=0;
        int right=mid+1;
        for(int i=l;i<=mid;i++){
            while(right<=r and arr[right]<arr[i]) right++;
            ans+=right-mid-1;
        }
        int i=l,j=mid+1,it=0;
        while(i<=mid and j<=r){
            if(arr[i]<=arr[j]) v[it++]=arr[i++];
            else v[it++]=arr[j++];
        }
        while(i<=mid) v[it++]=arr[i++];
        while(j<=r) v[it++]=arr[j++];
        
        for(i=0;i<r-l+1;i++) arr[i+l]=v[i];
        return ans;
    }
    
    long long rec(int l,int r,long long arr[], long long N){
        if(l>=r) return 0;
        
        int mid=(l+r)/2;
        long long ans=rec(l,mid,arr,N)+rec(mid+1,r,arr,N);
        ans+=merge(l,r,mid,arr,N);
        return ans;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        return rec(0,n-1,arr,n);
    }

};
