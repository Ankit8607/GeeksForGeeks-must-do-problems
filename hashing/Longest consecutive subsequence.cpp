// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        int mx=*max_element(arr,arr+N);
        vector<int>pre(mx+1,0);
        for(int i=0;i<N;i++) pre[arr[i]]=1;
        int ans=1,cnt=pre[0];
        for(int i=1;i<=mx;i++){
            if(pre[i]) pre[i]+=pre[i-1];
            ans=max(ans,pre[i]);
        }
        return ans;
    }
};
