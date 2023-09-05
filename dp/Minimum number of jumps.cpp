// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

class Solution{
  public:
    int minJumps(int arr[], int n){
        int mx=min(n-1,arr[0]),mx2=0,cnt=0;
        for(int i=1;i<n;i++){
            mx2=max(mx2,i+arr[i]);
            if(i==mx) cnt++,mx=min(mx2,n-1),mx2=0;
            else if(i>mx) return -1;
        }
        return cnt;
    }
};
