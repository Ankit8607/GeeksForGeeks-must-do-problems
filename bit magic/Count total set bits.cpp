// https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        n++;
        int ans=0,per=2;
        for(int i=0;i<30;i++){
            ans+=n/per*(per/2)+max(0,n-((n/per)*per)-per/2);
            per*=2;
        }
        return ans;
    }
};
