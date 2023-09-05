// https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1

 class Solution {
  public:
    string longestPalin (string S) {
        string s="*#";
        for(auto i:S) s+=i,s+="#";
        s+="@";
        int c=0,r=0,res=1;
        vector<int>ans(s.size(),0);
        for(int i=1;i<s.size()-1;i++){
            int mirr=2*c-i;
            if(i<r) ans[i]=min(ans[mirr],r-i);
            while(s[i+ans[i]+1]==s[i-ans[i]-1]) ans[i]++;
            if(i+ans[i]>r){
                c=i;
                r=i+ans[i];
            }
            res=max(res,ans[i]);
        }
        string tmp;
        for(int i=1;i<s.size()-1;i++){
            if(ans[i]==res){
                for(int j=i-res;j<=i+res;j++) if(s[j]!='#') tmp+=s[j];
                return tmp;
            }
        }
    }
};
