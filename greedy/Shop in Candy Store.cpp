// https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1

class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        int ans1=0,ans2=0;
        sort(candies,candies+N);
        int t=(N+k)/(k+1),l=0,r=N-1;
        while(t--){
            ans1+=candies[l++];
            ans2+=candies[r--];
        }
        return {ans1,ans2};
    }
};
