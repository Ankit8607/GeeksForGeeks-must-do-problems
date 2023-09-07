// https://practice.geeksforgeeks.org/problems/minimum-swaps/1

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	   // vector<pair<int,int>>arr;
	   map<int,int>mp;
	    for(int i=0;i<nums.size();i++) mp[nums[i]]=i;
	   // sort(arr.begin(),arr.end());
	    int ans=0;
	    auto it=mp.begin();
	    for(int i=0;i<nums.size();i++){
	        if(nums[i]==it->first){ 
	            it++;
	            continue;
	        }
	       // cout<<"i= "<<i<<" ans= "<<ans<<endl;
	        swap(nums[i],nums[it->second]);
	        mp[nums[it->second]]=it->second;
	       // for(auto i:nums) cout<<i<<" "; cout<<endl;
	        it++;
	        ans++;
	    }
	    return ans;
	}
};
