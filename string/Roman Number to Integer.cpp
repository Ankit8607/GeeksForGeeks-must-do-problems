// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

class Solution {
  public:
    int romanToDecimal(string &s) {
        map<char,int>pred,val;
        val['I']=1;val['V']=5;val['X']=10;val['L']=50;val['C']=100;val['D']=500;val['M']=1000;
        pred['I']=1;pred['V']=2;pred['X']=3;pred['L']=4;pred['C']=5;pred['D']=6;pred['M']=7;
        char last='I';
        int n=s.size(),ans=0;
        for(int i=n-1;i>=0;i--){
            if(pred[s[i]]>=pred[last]) ans+=val[s[i]];
            else ans-=val[s[i]];
            last=s[i];
        }
        return ans;
    }
};
