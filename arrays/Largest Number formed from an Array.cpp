// https://practice.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1

class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool comp(string &a, string &b){
	    return a+b>b+a;
	}
	
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(),arr.end(),comp);
	    string ans;
	    for(auto i:arr) ans+=i;
	    return ans;
	}
};
