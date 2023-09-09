// https://practice.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1

class Solution
{
    public:
    //Function to insert heap.
    
    multiset<int>first,second;
    
    void insertHeap(int &x)
    {
        if(second.size()==0 || *first.rbegin()>=x) first.insert(x);
        else second.insert(x);
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(first.size()-1>second.size()){
            second.insert(*first.rbegin());
            first.erase(--first.end());
        }
        else if(second.size()>first.size()){
            first.insert(*second.begin());
            second.erase(second.begin());
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(first.size()==second.size()) return (*first.rbegin()+*second.begin())/2.0;
        else return *first.rbegin();
    }
};
