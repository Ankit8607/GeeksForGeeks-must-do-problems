// https://practice.geeksforgeeks.org/problems/josephus-problem/1

class Solution
{
    
    int rec(int n,int k){
        if(n==1) return 0;
        return (rec(n-1,k)+k)%n; 
    }
    
    public:
    int josephus(int n, int k)
    {
       return rec(n,k)+1;
    }
};
