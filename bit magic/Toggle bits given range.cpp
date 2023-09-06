// https://practice.geeksforgeeks.org/problems/toggle-bits-given-range0952/1

class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        for(int i=L-1;i<R;i++) N=N^(1<<i);
        return N;
    }
};
