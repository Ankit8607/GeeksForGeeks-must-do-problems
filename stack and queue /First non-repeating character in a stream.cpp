// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1

class Solution {
	public:
		string FirstNonRepeating(string A){
		    queue<char>q;
		    string ans;
		    int arr[26]={0};
		    for(auto i:A){
		        arr[i-'a']++;q.push(i);
		        while(!q.empty() and arr[q.front()-'a']>1) q.pop();
		        if(!q.empty()) ans+=q.front();
		        else ans+='#';
		    }
		    return ans;
		}

};
