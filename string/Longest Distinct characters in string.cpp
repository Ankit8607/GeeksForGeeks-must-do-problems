// https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1

int longestSubstrDistinctChars (string s)
{
    int ans=1,cnt=0,l=0;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        if(mp[s[i]]>1){
            while(s[l]!=s[i]) mp[s[l++]]--;
            mp[s[l++]]--;
        }
        ans=max(ans,i-l+1);
    }
    return ans;
}
