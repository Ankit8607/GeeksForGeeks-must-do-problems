// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int l=0,r=0;
        if(s<=0) return {-1};
        while(r<arr.size()){
            // if(s==0) return ans={l+1,r+1};
            s-=arr[r++];
            while(s<0) s+=arr[l++];
            if(s==0) return {l+1,r};
        }
        return {-1};
    }
};
