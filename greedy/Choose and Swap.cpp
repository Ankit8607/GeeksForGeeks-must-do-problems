// https://practice.geeksforgeeks.org/problems/choose-and-swap0531/1

class Solution{
public:
    string chooseandswap(string a){
        // int arr[26]={0};
        vector<int>arr(26,0);
        for(int i=0;i<a.size();i++){
            if(!arr[a[i]-'a']) arr[a[i]-'a']=i+1;
        }
        char l=1,r=1;
        for(int i=0;i<a.size();i++){
            int flag=0;
            for(int j=0;j<(a[i]-'a');j++){
                if(arr[j] and arr[j]-1>i){
                    flag=1;
                    l=a[i];
                    r=j+'a';
                    break;
                }
            }
            if(flag) break;
        }
        for(auto &i:a){
            if(i==l) i=r;
            else if(i==r) i=l;
        }
        return a;
    }
    
};
