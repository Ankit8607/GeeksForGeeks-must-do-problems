// https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1

class Solution{
public:
    string findLargest(int N, int S){
        if(N*9<S || (N>1 and S==0)) return "-1";
        string ans;
        while(N--){
            if(S>=9) ans+='9',S-=9;
            else ans+=(S+'0'),S=0;
        }
        return ans;
    }
};
