// https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits-1587115621/1

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	return ((n<<1)&(0xaaaaaaaa))|((n>>1)&(0x55555555));
    }
};
