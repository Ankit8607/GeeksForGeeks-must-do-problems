// https://practice.geeksforgeeks.org/problems/maximize-toys0331/1

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(),arr.end());
        int i=0,ans=0;
        while(i<N and arr[i]<=K) ans++, K-=arr[i++];
        return ans;
    }
};
