// https://practice.geeksforgeeks.org/problems/anagram-1587115620/1

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        vector<int>arr(26,0);
        for(char i:a) arr[i-'a']++;
        for(char i:b) arr[i-'a']--;
        for(auto i:arr) if(i) return 0;
        return 1;
        
    }

};
