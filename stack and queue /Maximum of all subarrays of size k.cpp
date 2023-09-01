// https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int>q;
        vector<int>ans;
        for(int i=0;i<n;i++){
            while(!q.empty() and arr[i]>q.front()) q.pop_front();
            q.push_front(arr[i]);
            if(i+1>=k) ans.push_back(q.back());
            if(i+1>=k and q.back()== arr[i-k+1]) q.pop_back();
        }
        return ans;
    }
};
