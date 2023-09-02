// https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++) arr.push_back({end[i],start[i]});
        sort(arr.begin(),arr.end());
        int last=-1,ans=0;
        for(auto i: arr){
            if(i.second>last) ans++,last=i.first;
        }
        return ans;
    }
};
