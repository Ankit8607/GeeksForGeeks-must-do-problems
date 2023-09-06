// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long>st;
        vector<long long>ans(n,-1);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() and st.top()<=arr[i]) st.pop();
            if(st.empty()) ans[i]=-1;
            else ans[i]=st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
