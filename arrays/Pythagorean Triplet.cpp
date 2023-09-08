// https://practice.geeksforgeeks.org/problems/pythagorean-triplet3018/1

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	
	bool checkTriplet(int arr[], int n) {
        // code here
        sort(arr, arr+n);
        for(int i=0;i<n;i++)
        {
            arr[i]*=arr[i]; // Don't use sqrt..!
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x=arr[i]+arr[j];
                if(mp.find(x)!=mp.end())
                {
                    return true;
                }
                mp[arr[j]]++;
            }
        }
        return false;
    }
};
