// https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++) mp[arr[i]]=1;
	    int ans=0;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(mp[arr[i]+arr[j]]) ans++;
	        }
	    }
	    return ans;
	}
};
