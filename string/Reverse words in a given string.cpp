//  https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        int l=0,n=S.size();
        reverse(S.begin(),S.end());
        for(int i=1;i<n;i++){
            if(S[i]=='.') reverse(S.begin()+l,S.begin()+i),l=i+1;
        }
        reverse(S.begin()+l,S.end());
        return S;
    } 
};
