// https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    vector<int>arr(26,0);
	    string ans;
	    for(auto i:S){
	        if(!arr[i-'a']) ans+=i;
	        arr[i-'a']=1;
	    }
	    return ans;
	}
};
