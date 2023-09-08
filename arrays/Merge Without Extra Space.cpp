// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int l=0,r=0;
            for(int i=0;i<n;i++){
                if(r==m || arr1[l]<=arr2[r]) l++;
                else r++;
            }
            r=0;
            for(int i=l;i<n;i++) swap(arr1[i],arr2[r++]);
            sort(arr1)
        } 
};
