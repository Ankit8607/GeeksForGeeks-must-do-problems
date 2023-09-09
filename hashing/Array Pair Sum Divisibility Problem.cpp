// https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int cnt[k]={0};
        for(auto i:nums) cnt[i%k]++;
        if(cnt[0]%2) return 0;
        int l=1,r=k-1;
        while(l<r){
            if(cnt[l]!=cnt[r]) return 0;
            l++; r--;
        }
        return 1;
    }
};
