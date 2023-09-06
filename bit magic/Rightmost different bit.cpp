// https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        if((m^n)==0) return -1;
        return log2((n^m)^((n^m)-1))+1;
    }
};
