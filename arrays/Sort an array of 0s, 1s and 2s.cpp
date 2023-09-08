// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int it=0,i=0,j=n-1;
        while(it<=j){
            if(a[it]==0) swap(a[it],a[i++]);
            else if(a[it]==2) swap(a[it],a[j--]),it--;
            it++;
        }
    }
    
};
