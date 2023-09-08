// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        for(int i=0;i<n-1;i++) if(abs(array[i])<n) array[abs(array[i])-1]*=-1;
        for(int i=0;i<n-1;i++) if(array[i]>0) return i+1;
        return n;
    }
};
