// https://practice.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            int l=0,r=0,t=n-1;
            while(t--){
                if(ar1[l]<=ar2[r]) l++;
                else r++;
            }
            if(l==n) return ar2[r]+ar2[r+1];
            else if(r==n) return ar1[l]+ar1[l+1];
            int ans;
            if(ar1[l]<=ar2[r]) ans=ar1[l++];
            else ans=ar2[r++];
            if(l==n) return ans+ar2[r];
            if(r==n) return ans+ar1[l];
            return ans+min(ar1[l],ar2[r]);
            
    }
};
