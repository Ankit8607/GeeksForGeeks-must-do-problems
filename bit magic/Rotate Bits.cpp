// https://practice.geeksforgeeks.org/problems/rotate-bits4524/1

class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
             d = d%16;
            int a = ((n<<d) | (n>>(16-d))) & 0xFFFF;
            int b = ((n>>d) | (n<<(16-d))) & 0xFFFF;
            
            return {a,b};
        }
};
