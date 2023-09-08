// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	vector<pair<int,int>>v;
    	for(int i=0;i<n;i++){
    	    v.push_back({arr[i],-1});
    	    v.push_back({dep[i],1});
    	}
    	sort(v.begin(),v.end());
    	int ans=1,cnt=0;
    	for(auto i: v){
    	    if(i.second==-1) cnt++;
    	    else cnt--;
    	    ans=max(ans,cnt);
    	}
    	return ans;
    }
};
