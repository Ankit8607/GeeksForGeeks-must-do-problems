// https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1

class Solution
{
  public:
    int minOperation(int n)
    {
        if(n==0) return 0;
        if(n%2) return 1+minOperation(n-1);
        return 1+minOperation(n/2);
    }
};
